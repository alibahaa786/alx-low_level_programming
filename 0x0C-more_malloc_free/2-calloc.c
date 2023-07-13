#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function
 * @nmemb: integer
 * @size: integer
 * Return: Null or array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (!nmemb || !size)
		return (NULL);
	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);
	return (mem);
}
