#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 *
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	int i;

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
	if (!mem)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)
		mem[i] = ptr[i];
	free(ptr);
	return (mem);
}
