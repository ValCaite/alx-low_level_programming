#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at end of file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}

	bytes_written = fwrite(text_content, sizeof(char), strlen(text_content), file);
	fclose(file);

	if (bytes_written != strlen(text_content))
	{
		return (-1);
	}

	return (1);
}

