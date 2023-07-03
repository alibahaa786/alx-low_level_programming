#include "main.h"

/**
 * _strpbrk - function
 * @s: pointer
 * @accept: pointer
 * Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
		}
	}
	return ('\0');
}
