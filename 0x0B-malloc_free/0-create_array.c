#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: integer
 * @c: char
 * Return: null
*/

char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return ('\0');
	array = malloc(sizeof(c) * size);
	while (size--)
		array[size] = c;
	free(array);
	return (array);
}
