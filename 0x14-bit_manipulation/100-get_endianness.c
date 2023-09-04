#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 *
 * Return: 0 for big, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *b = (char *) &x;

	if (*b == 1)
	{
	return (1);
	}
	else
	{
	return (0);
}
}
