#include "main.h"

/**
 * _memcpy - function
 * @dest: pointer
 * @src: pointer
 * @n: input
 * Return: shcar
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}
