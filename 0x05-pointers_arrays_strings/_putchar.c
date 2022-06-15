#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: The character to be printed
 *
 * Return: On success return 1 
 * On error return -1 and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
