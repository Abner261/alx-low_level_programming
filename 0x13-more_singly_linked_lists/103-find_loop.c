#include "lists.h"


/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: A pointer to the head of the listint_t
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fasterN = head;
	listint_t *fastN = head;

	if (head)

		while (fastN && fasterN && (*fasterN).next)
		{
			fasterN = (*(*fasterN).next).next;
			fastN = (*fastN).next;
			if (fasterN == fastN)
			{
				fastN = head;
				while (fastN != fasterN)
				{
					fastN = (*fastN).next;
					fasterN = (*fasterN).next;
				}
				return (fasterN);
			}
		}




	return (NULL);
}

