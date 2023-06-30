#include "main.h"

/**
 * rot13 - function
 * @str: pointer
 * Return: null
*/

char *rot13(char *str)
{
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == normal[j])
				str[i] = rot13[j];
		}
	}
	return (str);
}
