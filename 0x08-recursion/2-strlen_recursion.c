#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - A  function that returns the length of a string
 * @s: A pointer to a string  for which the length is to be determined
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
