#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	};
}
