#include "main.h"

/**
 * _puts_recursion -A function that Prints a string followed by a new line.
 * @s: A pointer to a string to be printed
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int k = 0;

	if (s[k] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[k]);
	s++;
	_puts_recursion(s);
}
