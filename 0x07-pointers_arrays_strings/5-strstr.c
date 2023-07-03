#include "main.h"

/**
 * _strstr - function
 * @haystack: pointer
 * @needle: pointer
 * Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int result;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		if (haystack[i] == needle[j] && j == 0)
		{
			j++;
			result = i;
			for (; haystack[result + j] == needle[j]; j++)
			{
				if (!needle[j + 1])
				{
					haystack += result;
					return (haystack);
				}
			}
		}
	}
	return ('\0');
}
