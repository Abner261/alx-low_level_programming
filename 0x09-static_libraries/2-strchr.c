#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that is used to search for the first
 * occurrence of a specific character within a given string
 * @s: This is the input string where
 * I want to search for a character
 * @c: This is the character
 * I want to find in the string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
