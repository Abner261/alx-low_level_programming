#include "main.h"
/**
 * _strncat - A function that combines two strings
 * using at most n bytes from src
 * @dest: This is the first string
 * where I want to attach another string
 * @src: This is the second string that
 * I want to add to the end of the first string
 * @n: This is the maximum number of characters
 * from src that I want to attach to dest
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
