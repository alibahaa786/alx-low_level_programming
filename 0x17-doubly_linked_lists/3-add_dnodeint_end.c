#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: node
 * @n: int
 * Return: address of new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	current = *head;
	new->n = n;
	new->next = NULL;
	if (!current)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (current->next)
		current = current->next;
	new->prev = current;
	current->next = new;
	return (new);
}
