#include "main.h"
/**
 * _strcat - A function that combines two strings
 * @dest: This is the first string where
 * I want to attach another string
 * @src: This is the second string
 * that I want to add to the end of the first string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
