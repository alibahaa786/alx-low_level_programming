#include "lists.h"

/**
 * pop_listint - function
 * @head: pointer
 * Return: n
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int sum;

	if (*head == NULL)
		return (0);

	temp = *head;
	sum = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (sum);
};
