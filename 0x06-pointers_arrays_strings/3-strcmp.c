#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: value less than, greater than or equal to 0
 * if the string is less than greater than or eqaul to the other
 */

int _strcmp(char *s1, char *s2)

{

	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
	counter++;
	}
	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
