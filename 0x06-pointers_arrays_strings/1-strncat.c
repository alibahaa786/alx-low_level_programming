#include "main.h"

/**
 * _strncat - sdjkfanf
 * @dest: pointer
 * @src: pointer
 * Return: null
*/

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i = 0;
	int len_src;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (len_src = 0; src[len_src] != '\0'; len_src++)
	{
	}
	if (n > len_src)
		n = len_src;
	for (; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = src[len_src];
	return (dest);
}
