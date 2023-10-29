#include "main.h"
#include <stdio.h>

/**
 * _memset - A function that lets you fill a part of your
 * computer's memory with a specific value
 * @s: The initial memory location where the filling process begins
 * @b: This is the value I want to use to fill the memory
 * @n: This is the number of bytes in the memory that
 * I want to change and fill with the value b
 * Return: change the array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
