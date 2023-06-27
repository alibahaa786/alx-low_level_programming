#include "main.h"

/**
 * _strcpy - copy string
 * @dest: pointer
 * @src: pointer
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
