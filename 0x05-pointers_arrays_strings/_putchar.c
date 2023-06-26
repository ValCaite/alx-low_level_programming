#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Return: on success 1, otherwise -1 and errno set appropriately
 */

int _putchar(char c)

{
return (write(1, &c, 1));
}
