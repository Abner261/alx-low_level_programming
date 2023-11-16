#include "main.h"

/**
 * _print_rev_recursion - A function that Prints a string in reverse
 * @s: A pointer to a string that will be printed in reverse
 * Return: 0 void is used because the primary task is to print
 * characters rather than to compute and return a specific value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')

	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
