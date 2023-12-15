#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_t list
 * @head: A pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}

