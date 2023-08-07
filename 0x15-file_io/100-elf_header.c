#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
 * print_error - function that prints error
 * print_elf_header_info - function that prints elf header info
 * main - main
 *
 * Return: Always 0
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void print_elf_header_info(const Elf64_Ehdr *header);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Error: Cannot open file");
	}

	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		print_error("Error: Not an ELF file");
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}

void print_elf_header_info(const Elf64_Ehdr *header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V" : "Other");
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

