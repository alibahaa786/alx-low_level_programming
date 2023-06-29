#include "main.h"

/**
 * _strncpy - function
 * @dest: pointer
 * @src: pointer
 * @n: input
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len_dest;
	int len_src;
	int i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{
	}
	for (len_src = 0; src[len_src] != '\0'; len_src++)
	{
	}
	for (i = 0; i < n; i++)
	{
		if (i < len_src)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
