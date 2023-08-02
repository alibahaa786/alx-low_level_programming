#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_noteint - function
 * @head: pointer
 * @n: num
 * Return: num
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
