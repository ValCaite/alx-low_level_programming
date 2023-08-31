#include <stddef.h>
#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer to a string of chars
 *
 * Return: the coverted number, or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int val = 0;
	int bitval = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			val += bitval;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		bitval *= 2;
		i--;
	}

	return (val);
}
