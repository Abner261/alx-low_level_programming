#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a listint_t list
 * @h: A pointer to the head of the listint_t
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *temp;

	if (!h || !*h)
		return (0);

	current = *h;
	*h = NULL;

	while (current)
	{
		temp = current;
		current = current->next;
		len++;

		if (temp < current)
			free(temp);
		else
		{
			free(temp);
			break;
		}
	}

	return (len);
}
