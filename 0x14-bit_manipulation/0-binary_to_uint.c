#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int deci = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci = 2 * deci + (b[i] - '0');
	}

	return (deci);
}
