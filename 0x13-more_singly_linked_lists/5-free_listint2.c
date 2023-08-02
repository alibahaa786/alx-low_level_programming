#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	};
	head = NULL;
}
