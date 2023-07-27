#include "lists.h"

size_t print_list(const list_t *h)
{
	int sum = 0;
	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	if (h->next)
		sum += print_list(h->next);
	sum++;
	return (sum);
}
