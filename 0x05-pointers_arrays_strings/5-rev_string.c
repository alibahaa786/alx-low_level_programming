#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer
 * Return: null
*/

void rev_string(char *s)
{
	int len = 0;
	int index;
	char tmp;

	for (index = 0; s[index] != '\0'; index++)
		len++;

	for (index -= 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
