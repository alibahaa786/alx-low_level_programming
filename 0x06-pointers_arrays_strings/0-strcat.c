#include "main.h"

/**
 * *_strcat - jakdshsd
 * @dest: pointer
 * @src: pointer
 * Return: Null
*/

char *_strcat(char *dest, char *src)
{
	int len;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	*dest += len;
	dest = src;
	return(dest);
}
