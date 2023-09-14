#include "lists.h"

/**
 * print_dlistint - print double linked list
 * @h: double linked list
 * Return: list size
*/

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t num = 0;

	printf("%d\n", h->n);
	num++;
	current = h->next;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}
	return (num);
}
