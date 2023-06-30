#include "main.h"

/**
 * cap_string - function
 * @str: pointer
 * Return: string
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 32 && str[i] <= 34) || str[i] == 40 || str[i] == 41 || str[i] == 44 || str[i] == 46 || str[i] == 59 || str[i] == 123 || str[i] == 125)
		{
			if (str[i - 1] >= 97 && str[i - 1] <= 122)
				str[i - 1] -= 32;
		}
	}
	str[0] -= 32;
	return (str);
}
