#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: Null or pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i;
	unsigned int len_s1 = strlen(s1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	result = malloc(sizeof(char) * len_s1 + n + 2);
	if (!result)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[i + len_s1] = s2[i];
	result[i + len_s1] = '\0';
	return (result);
}
