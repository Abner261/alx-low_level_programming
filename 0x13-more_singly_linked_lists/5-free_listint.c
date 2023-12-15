#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a
 * listint_t list and sets the head to NULL
 * @head: A pointer to the head of the list
 */

void free_listint2(listint_t **head)

{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}
