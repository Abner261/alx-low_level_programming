#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in a linked
 * listint_t list
 * @h: A pointer to the head of the listint_t list
 * Return: The number of elements in the lisint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
