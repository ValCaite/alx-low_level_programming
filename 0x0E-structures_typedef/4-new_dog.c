#include "dog.h"
#include <stdlib.h>

int int_strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: string to be measured
 *
 * Return: length of the string
 */

int int_strlen(char *str)
{

int len = 0;

while (*str++)
	len++;
return (len);
}
/**
 * _strcopy - copies string pointed to
 * @dest: the buffer storing the copy
 * @src: the source string
 *
 * Return: the pointer to dest
 */

char *_strcopy(char *dest, char *src)
       
	int index;

		        if (dest == NULL || src == NULL)
				        return NULL;

			    dest = malloc(sizeof(char) * (int_strlen(src) + 1));
			        if (dest == NULL)
					        return NULL;

				    for (index = 0; src[index]; index++)
					            dest[index] = src[index];

				        dest[index] = '\0';

					    return dest;
	}

}

/**
 * new_dog - function that created a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;

if (name == NULL || age < 0 || owner == NULL)
	return (NULL);
doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
	return (NULL);
doggo->owner = malloc(sizeof(char) * (int_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}
doggo->name = _strcopy(doggo->name, name);
doggo->age = age;
doggo->owner = _strcopy(doggo->owner, owner);

return (doggo);
}
