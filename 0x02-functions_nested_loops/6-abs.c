#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @c: The number to be computed.
 *
 * Return: Absolute value of a number or zero
 */

int _abs(int c)

{

	if (c < 0)
{

	int _abs;

		_abs = c * -1;
		return (_abs);
	}
	return (c);
}
