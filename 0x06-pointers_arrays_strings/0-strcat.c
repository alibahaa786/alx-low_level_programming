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
	int i = 0;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = src[i];
	return(dest);
}
