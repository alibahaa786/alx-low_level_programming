#include "main.h"

/**
 * _strspn - function
 * @s: pointer
 * @accept: pointer
 * Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int check;
	int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				check++;
		}
		if (check)
			result++;
		else
			break;
	}
	return (result);
}
