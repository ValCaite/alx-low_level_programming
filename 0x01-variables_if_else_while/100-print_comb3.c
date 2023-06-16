#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits
 *
 *Return: Always 0
 */

int main(void)

{
	int a, b = '0', c;

	for (a = '0'; a <= '9'; a++)
	{
		for (c = b; c <= '9'; c++)
		{
			if (a != c)
			{
				putchar(a);
				putchar(c);
			}
			if (a == c)
			{
				continue;
			}
			if (a == '8' && c == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		b++;
	}
	putchar('\n');
	return (0);
}
