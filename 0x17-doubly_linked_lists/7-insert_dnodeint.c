#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: head node
 * @idx: index
 * @n: int
 * Return: address of new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;

	if (!idx)
		return (add_dnodeint(h, n));
	while (idx--)
	{
		current = current->next;
		if (!current)
			return (NULL);
	}
	if (!current->next)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	current->prev->next = new;
	new->n = n;
	new->prev = current->prev;
	new->next = current;
	current->prev = new;
	return (new);
}
