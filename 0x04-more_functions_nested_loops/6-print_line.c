#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: Number of times character is printed
 *
 * Return: Always 0
 */

void print_line(int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
