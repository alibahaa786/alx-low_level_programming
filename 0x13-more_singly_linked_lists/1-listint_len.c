#include "lists.h"

/**
 * listint_len - function
 * @h: struct
 * Return: num
*/

size_t listint_len(const listint_t *h)
{
	int sum = 1;

	if (!h)
		return (0);
	if (h->next)
		sum += listint_len(h->next);
	return (sum);
}
