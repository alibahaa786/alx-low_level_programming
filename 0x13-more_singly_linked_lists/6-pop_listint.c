#include "lists.h"

int pop_listint(listint_t **head)
{
	int n;

	if (!head)
		return (0);
	n = head->n;
	*head = head->next;
