#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: node
 * @index: nth
 * Return: nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index--)
	{
		if (!head)
			return (head);
		head = head->next;
	}
	return (head);
}
