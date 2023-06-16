#include <stdio.h>

/**
 * main - prints all possibel combinations of single digit numbers
 *
 * Return: Always 0
 */

int main(void)

{

	int i = '0';

	while (i <= '9')
	{
		putcahr(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
