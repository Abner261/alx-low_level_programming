#include "lists.h"

/**
  * print_dlistint - A function that prints all the elements of a
  * dlistint_t list
  * @h: A Pointer to the head of the list
  * Return: The Number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
