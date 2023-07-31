#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	int sum = 1;

	printf("%d\n", h->n);
	if (h->next)
		sum += print_listint(h->next);
	return (sum);
}
