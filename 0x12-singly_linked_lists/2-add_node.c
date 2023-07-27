#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_node - function
 * @head: pointer to head
 * @str: string
 * Return: new node
*/
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;
	char *string;

	len = strlen(str);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	string = strdup(str);
	new->str = string;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
