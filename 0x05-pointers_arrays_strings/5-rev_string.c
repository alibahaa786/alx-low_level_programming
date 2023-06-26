#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer
 * Return: null
*/

void rev_string(char *s)
{
	int len;
	char *rev;
	int i;

	rev = "";
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	len = i;
	while (i--)
	{
		rev += s[i];
	}
	for (i = 0; i < len; i++)
	{
		s[i] = rev[i];
	}
}
