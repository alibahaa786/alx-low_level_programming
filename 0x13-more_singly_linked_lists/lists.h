#ifndef FUNCTIONS_LISTS
#define FUNCTIONS_LISTS
#include <stddef.h>
#include <stdio.h>

/**
 * struct listint - function
 * @n: int
 * @next: struct
*/

typedef struct listint
{
	int n;
	struct listint *next;
} listint_t;
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
#endif /*FUNCTIONS_LISTS*/
