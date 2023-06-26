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

	rev = "";
	for (len = 0; s[len] != '\0'; len++)
	{
	}
	while (len--)
	{
		rev += s[len];
	}
}
