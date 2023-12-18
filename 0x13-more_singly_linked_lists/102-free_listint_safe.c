#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list
 * @h: A pointer to the head of the listint_t
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{


	listint_t *tmpory;
	int numDV;

	size_t lenOfItms = 0;

	if (h || *h)
	{
		while (*h)
		{
			numDV = *h - (**h).next;
			if (numDV > 0)
			{
				tmpory = (**h).next;
				free(*h);
				*h = tmpory;
				lenOfItms++;
			}
			else
			{
				free(*h);
				*h = NULL;
				lenOfItms++;
				break;
			}
		}


		*h = NULL;

		return (lenOfItms);
	}
	return (0);


}

