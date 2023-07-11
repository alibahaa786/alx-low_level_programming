#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str-concat - function
 * @s1: string
 * @s2: string
 * Return: null
*/

char *str_concat(char *s1, char *s2)
{
	char *final;
	int size1;
	int size2;
	int i;

	size1 = strlen(s1);
	size2 = strlen(s2);
	if (!size1)
		return (s2);
	if (!size2)
		return (s1);
	final = malloc(sizeof(char) * (size1 + size2) + 1);
	if (!final)
		return ('\0');
	while (size1--)
		final[size1] = s1[size1];
	for (i = size1; i < size2; i++)
		final[i] = s2[i - size1];
	return (final);
}
