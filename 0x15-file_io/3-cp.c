#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error - prints error message
 * @message: the error message to be printed
 * @filename: name of file whos content is copied
 * main - main
 * @argc: the numbe rof arguments
 * @argv: pointer to the arrray of arguments
 *
 * Return: Aways 0
 */
void print_error(const char *message, const char *filename)
{
	const char *file_from;

	const char *file_to;

	int fd_from;

	int fd_to;

	char buffer;

	ssize_t bytes_read, bytes_written;

	dprintf(STDERR_FILENO, message, filename);
	exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: %s file_from file_to\n", argv[0]);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error("Error: Can't write to %s\n", file_to);
	}

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error("Error: Can't write to %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error("Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close fd %d\n", fd_to);
	}

	return (0);
}

