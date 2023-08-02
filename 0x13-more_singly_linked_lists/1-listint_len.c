#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int sum = 1;

	if (h->next)
		sum += listint_len(h->next);
	return (sum);
}
