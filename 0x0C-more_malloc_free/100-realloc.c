#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function
 * @ptr: array
 * @old_size: int
 * @new_size: inte
 * Return: null
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	unsigned int i;
	char *ptr_copy;
	char *filler;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		mem = malloc(new_size);
		if (!mem)
			return (NULL);
		return (mem);
	}
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	mem = malloc(new_size);
	ptr_copy = ptr;
	filler = mem;
	if (!mem)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)
		filler[i] = *ptr_copy++;
	free(ptr);
	return (mem);
}
