#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - function
 * @h: node
 * Return: number of elements
*/

size_t print_listint(const listint_t *h)
{
	int sum = 1;

	if (!h)
		return (0);
	printf("%d\n", h->n);
	if (h->next)
		sum += print_listint(h->next);
	return (sum);
}
