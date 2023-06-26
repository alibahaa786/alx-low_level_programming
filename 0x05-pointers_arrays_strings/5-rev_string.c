#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer
 * Return: null
*/

void rev_string(char *s)
{
	int len;
	char rev[100000000] = "";
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	len = i;
	while (i--)
	{
		rev[j] = s[i];
		j++;
	}
	for (i = 0; i < len; i++)
	{
		s[i] = rev[i];
	}
}
