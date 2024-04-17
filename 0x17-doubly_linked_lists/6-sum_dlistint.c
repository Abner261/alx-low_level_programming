#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: A Pointer to the head of the list
 * Return: The sum of all the data (n) of the list, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
