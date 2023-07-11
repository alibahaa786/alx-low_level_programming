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
	char array[size];

	while (size--)
		array[size] = c;
	return (array);
}
