#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - function
 * @ac: integer
 * @av: array
 * Return: null
*/

char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int size = 0;
	int i;
	int j;
	int i_str = 0;

	if (!ac || !av)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	str = malloc(sizeof(char) * size + ac);
	if (!str)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[i_str] = av[i][j];
			i_str++;
		}
		str[i_str] = '\n';
		i_str++;
	}
	return (str);
}
