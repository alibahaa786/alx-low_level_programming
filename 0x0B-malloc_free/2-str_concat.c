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
	int i;
	int i_final = 0;

	final = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (!final)
		return ('\0');
	for (i = 0; s1[i]; i++)
	{
		final[i_final] = s1[i];
		i_final++;
	}
	for (i = 0; s2[i]; i++)
	{
		final[i_final] = s2[i];
		i_final++;
	}
	return (final);
}
