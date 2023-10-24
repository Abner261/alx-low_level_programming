#include "main.h"
/**
 * _strpbrk - A function that searches a string for any
 * set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
		int y;

		while (*s)
		{
			for (y = 0; accept[y]; y++)
			{
			if (*s == accept[y])
			return (s);
			}
		s++;
		}

	return ('\0');
}
