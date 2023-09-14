#include "lists.h"

/**
 * dlistint_len - return number of nodes in double linked list
 * @h: double linked list
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return num;
}
