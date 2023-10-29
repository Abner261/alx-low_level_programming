#include "main.h"

/**
 * _puts - A function which is used to print a
 * string to the standard output followed by a new line
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
