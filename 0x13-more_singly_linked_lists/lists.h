#ifndef FUNCTIONS_LISTS
#define FUNCTIONS_LISTS
#include <stddef.h>

typedef struct listint 
{
	int n;
	struct listint *next;
}listint_t;
size_t print_listint(const listint_t *h);
#endif /*FUNCTIONS_LISTS*/
