#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: function pointer
 *
 * Return: the size of the list that was free’d
 */
void free_listp2(listint_t **head)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
