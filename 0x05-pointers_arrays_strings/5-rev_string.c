#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer
 * Return: null
*/

void rev_string(char *s)
{
	int len;
	int i;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	char rev[len];

	for (i = 0; len >= 0; i++)
	{
		len--;
		rev[i] = s[len];
	}
}
