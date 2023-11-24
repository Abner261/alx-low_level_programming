#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: This is a pointer to the memory previously allocated
 * @old_size: This is the size in bytes of the allocated space for ptr
 * @new_size: This is the new size in bytes of the new memory block
 * Return: A pointer to the newly reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);

	free(ptr);
	return (new_ptr);
}
