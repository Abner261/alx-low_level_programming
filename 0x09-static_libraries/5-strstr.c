#include "main.h"
#include <stdio.h>

/**
 * _strstr - A function which is used to locate a
 * substring within a given string
 * @haystack: This is the input string in which I
 * want to search for a substring
 * @needle: This is the substring that
 * I'm looking for within the haystack
 * Return: If the haystack pointer reaches the end of the
 * string without finding a match
 * the function returns NULL to indicate that the
 * needle was not found in the haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *all = haystack;
		char *ptt = needle;

		while (*ptt == *haystack && *ptt != '\0' && *haystack != '\0')
		{
			haystack++;
			ptt++;
		}
		if (*ptt == '\0')
			return (all);
		haystack = all + 1;
	}
	return (NULL);
}
