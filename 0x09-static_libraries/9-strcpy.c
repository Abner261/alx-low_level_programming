#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - A function which is used to copy the contents
 * of one string (the source string, src) into
 * another string (the destination string, dest)
 * @dest: This is the destination string where
 * I want to copy the content from src
 * @src: This is the source string that I want to copy
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{

	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
