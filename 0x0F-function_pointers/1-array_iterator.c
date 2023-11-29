#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function given as a
 * parameter on each element of an array
 * @array: An array of integers
 * @size:The number of elements in the array to be printed
 * @action: The pointer to the fucntion
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
