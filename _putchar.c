#include "main.h"

/**
 * _putchar - writes the character a to stdout
 * @a: The character that will be printed
 *
 * Return: return 1 on success
 * On error, -1 is returned, and error number is set accordingly.
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
