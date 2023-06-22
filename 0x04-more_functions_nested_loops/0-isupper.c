#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Character to be checked
 * Return: 1 for uppercase character otherwise 0
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
