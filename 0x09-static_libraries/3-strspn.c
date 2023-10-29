#include "main.h"
/**
 * _strspn - A function which is used to find
 * the length of a prefix substring in one string
 * that consists only of characters from another string
 * @s: This is the input string to be checked
 * @accept: This is the set of characters
 * I want to search for in the input string s
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		z = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z = 1;
			}
		}
		y = 0;
		if (z == 0)
			break;
		str++;
		x++;
	}
	return (x);
}
