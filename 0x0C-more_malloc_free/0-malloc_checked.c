#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 * otherwise if malloc fails, status value of 98
 */
void *malloc_checked(unsigned int b)
{

char *p;

p = malloc(b);
if (p == NULL)
	exit(98);
return (p);
}
