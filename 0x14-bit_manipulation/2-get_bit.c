#include "main.h"
/**
 * get_bit - function that returnsthe value of a bit at a given index
 * @n: value of the bit at given index
 * @index: the index starting from 0
 *
 * Return: value of the bit at index, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	val = (n >> index) & 1;

	return (val);
}

