#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a
 * newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: This is the input string that I want to duplicate
 * Return: Null if fails or if srt is NULL.
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	p = malloc(a * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
		p[b] = str[b];
	p[b] = '\0';

	return (p);
}
