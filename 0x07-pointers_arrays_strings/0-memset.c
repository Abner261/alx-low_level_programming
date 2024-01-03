#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: A Pointer to the memory area to be filled
 * @b: The constant byte to fill the memory with
 * @n: The Number of bytes to be filled
 * Return: A pointer to the filled memory area
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
