#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer 
 * @str: string to add in the new node
 * Return: address of the new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
	;

	new->len = nchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{		
		*head = new;
	}
	else
	{
	while (temp->next != NULL)
	temp = temp->next;
	temp->next = new;
	}

	return (*head);
}
