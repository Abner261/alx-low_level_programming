#include "search_algos.h"

/**
 * linear_skip - A function that searches for a value in a
 * sorted skip list of integers
 *
 * @list: A pointer to the head of the skip list
 *
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located
 * or NULL if not found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	/* Chech if the list is NULL */
	if (list == NULL)
		return (NULL);

	/* Iterate through the list using linear skip */
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		/* Check if express lane is available */
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   jump->index, jump->n);
		}
		else
		{
			/* move to the end of the list */
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	/* print the range where the value is found */
	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);

	/* linear search within the identified range */
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	/* print the last checked value */
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	/* Return the node if the value is found, otherwise return NULL */
	return (node->n == value ? node : NULL);
}
