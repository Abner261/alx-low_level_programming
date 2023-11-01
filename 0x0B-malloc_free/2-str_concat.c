#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - A function that combines two strings
 * @s1: This is the first input string that I want to combine
 * @s2: This is the second input string that
 * I want to combine to the first one
 * Return: Null on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *pstr = NULL;
	unsigned int len;
	unsigned int x, y, z, zz;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	len = x + y + 1;
	pstr = malloc(len * sizeof(char));

	if (pstr == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
	{
		pstr[z] = s1[z];
	}
	for (zz = 0; zz < y; z++, zz++)
	{
		pstr[z] = s2[zz];
	}
	pstr[len] = s2[zz];
	return (pstr);
}
