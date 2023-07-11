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
	char *final = '\0';
	int i;

	if (!size)
		return ('\0');
	array = malloc(sizeof(c) * size);
	while (size--)
		array[size] = c;
	for (i = 0; array[i]; i++)
		final[i] = array[i];
	free(array);
	return (final);
}
