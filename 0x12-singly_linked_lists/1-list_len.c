#include "lists.h"

/**
 * list_len - function
 * @h: node
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int num = 0;

	if (!h)
		return (0);
	num++;
	if (h->next)
		num += list_len(h->next);
	return (num);
}
