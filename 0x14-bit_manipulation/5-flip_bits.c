#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the number to be flipped
 * @m: the number flipped to
 *
 * Return: no of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned int count = 0;

	while (val)
	{
		count += val & 1;
		val >>= 1;
	}

	return (count);
}

