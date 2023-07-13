#include "main.h"
#include <stdlib.h>

/**
 * malloc-checked - function
 * @b: integer
 * Return: 0 or 98
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
