#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: array
 * Return: Null
*/

char *_strdup(char *str)
{
	char *copy;
	unsigned int size;

	if (!str)
		return ('\0');
	copy = malloc(sizeof(str));
	size = sizeof(str);
	if (!copy)
		return ('\0');
	while (size--)
		copy[size] = str[size];
	return (copy);
}
