#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standarad output
 * @letters: the number of letters it shoud read and print
 * @filename: name of the file
 *
 * Return: actaul number of letters it could read and print, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}


	file = fopen(filename, "r");


	if (file == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);

	fclose(file);
	free(buffer);

	if (bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_written);
}
