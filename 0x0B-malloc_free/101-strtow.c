#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * strtow - function
 * @str: string
 * Return: null
*/

char **strtow(char *str)
{
	char **strtow;
	int i;
	int j;
	int strtow_i = 0;
	int word_count = 0;
	int letter_count = 0;

	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (!(str[i] == 32))
		{
			if (!word_count || str[i - 1] == 32)
			{
				word_count++;
			}
		}
	}
	strtow = malloc(sizeof(char *) * word_count);
	if (!strtow)
		return (NULL);
	word_count = 0;
	for (i = 0; str[i]; i++)
        {
                if (!(str[i] == 32))
                {
                        if (!word_count || str[i - 1] == 32)
                        {
				if (word_count)
				{
					strtow[word_count - 1] = malloc(sizeof(char) * letter_count);
					if (!strtow[word_count - 1])
						return (NULL);
					i -= letter_count;
					for (j = 0; j < letter_count; j++)
					{
						strtow[word_count - 1][strtow_i + j] = str[i];
						strtow_i++;
						i++;
					}
				}
                                word_count++;
				letter_count = 0;
                        }
			letter_count++;
                }
        }
	return (strtow);
}
