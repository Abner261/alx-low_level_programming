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
	unsigned int len1 = (s1 == NULL) ? 0 : 0;
	unsigned int len2 = (s2 == NULL) ? 0 : 0;
	char *result, *p;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	p = result;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;

	*p = '\0';
	return (result);
}
