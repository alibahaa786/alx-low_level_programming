#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_node_end - function
 * @head: pointer
 * @str: string
 * Return: number of elements
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *string;
	list_t *new;
	list_t *end;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	string = strdup(str);
	if (!string)
	{
		free(new);
		return (NULL);
	}
	len = strlen(string);
	new->str = string;
	new->len = len;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
