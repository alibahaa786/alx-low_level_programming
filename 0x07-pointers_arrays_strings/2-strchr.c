#include "main.h"

/**
 * _strchr - function
 * @s: pointers
 * @c: input
 * Return: char
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
