#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - A function which is used to search
 * for the first occurrence of any character from
 * a specified set of characters within a given string
 * @s:This is the input string in which
 * I want to search for characters
 * @accept: This is the set of characters
 * I want to search for within the input string s
 * Return: Null If no match is found after
 * examining all characters in both s and accept
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
