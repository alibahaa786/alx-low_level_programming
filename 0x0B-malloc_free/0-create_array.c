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
	unsigned int i;

	if (!size)
		return ('\0');
	array = malloc(sizeof(char) * size);
	if (!array)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
