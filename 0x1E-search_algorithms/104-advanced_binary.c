#include "search_algos.h"

/**
 * advanced_binary_recursive - A recursive function to perform advanced
 * binary search
 *
 * @array: A pointer to the first element of the array to search in
 *
 * @left: The left boundary of the subarray to search
 *
 * @right: The right boundary of the subarray to search
 *
 * @value: The value to search for
 *
 * Return: The index where value is located or -1 if not found
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - A function that searches for a value in a sorted array
 * of integers using an advanced binary search algorithm
 *
 * @array: A Pointer to the first element of the array to search in
 *
 * @size: The number of elements in the array
 *
 * @value: The value to search for
 *
 * Return: The first index where value is located or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
