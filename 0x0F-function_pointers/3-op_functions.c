#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: the firdt number
 * @b: the second number
 *
 * return: the sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: the first number
 * @b: the second number
 *
 * return: the difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}


/**
 * op_mul - returns the product  of two numbers
 * @a: the first number
 * @b: the second number
 *
 * return: the product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - returns the result of the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * return: the result of the division of a by b
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - returns the remainder of the division two numbers
 * @a: the first number
 * @b: the second number
 *
 * return: the remainder of the division of a by b
 */
{
return (a % b);
}

