#include "main.h"
#include <stdlib.h>

/**
 * arrat_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array
 * Otherwise if min > max or malloc fails return NULL
 */

int *array_range(int min, int max)

{

int *ar;
	int i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));

if (ar == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
	ar[i] = min;

return (ar);
}
