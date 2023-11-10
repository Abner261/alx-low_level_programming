#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -A function that allocates memory for an array, using malloc
 * @nmemb: The number of elements to be allocated in the array
 * @size: The size (in bytes) of each element in the array
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	char *s;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (p);

	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	s = (char *)p;
	for (x = 0; x < (nmemb * size); x++)
		*(s + x) = 0;

	return (s);
}
