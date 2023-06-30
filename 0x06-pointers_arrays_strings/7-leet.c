#include "main.h"

/**
 * leet - function
 * @str: pointer
 * Return: string
*/

char *leet(char *str)
{
	char str2[] = {'O', 'L', '	', 'E', 'A', '	', '	', 'T'};
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == str2[j] || str[i] - 32 == str2[j])
				str[i] = '0' + j;
		}
	}
	return (str);
}
