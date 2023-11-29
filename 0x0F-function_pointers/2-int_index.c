#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: Array of integers to search through
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 * Return: Index of the first element for which the cmp function
 * does not return 0, -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(*(array + x)))
			return (x);
	}
	return (-1);
}
