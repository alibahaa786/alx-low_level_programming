#include "main.h"

/**
 * _strlen - return string length
 * @s: pointer
 * Return: string length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0;; i++)
	{
		if (*s[i] == '\0')
			return (i);
	}
}
