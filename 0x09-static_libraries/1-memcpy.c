#include "main.h"
/**
 *_memcpy - This is a function that copies memory area
 *@dest: This is the destination memory where I want to copy data to
 *@src: This is the source memory where I want to copy data from
 *@n: This is the number of bytes I want to copy from src to dest
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
