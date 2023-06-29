#include "main.h"

/** _strncat - sdjkfanf
 * @dest: pointer
 * @src: pointer
 * Return: null
*/

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i = 0;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = src[i];
	return (dest);
}
