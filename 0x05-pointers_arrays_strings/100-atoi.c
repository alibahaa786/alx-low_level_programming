#include "main.h"

/**
 * _atoi - print integer only
 * @s: ppointer
 * Return: integer
*/

int _atoi(char *s)
{
	int len;
	int neg = 0;
	unsigned int tens = 1;
	int num_len = 0;
	int number = 0;
	int i;
	int digit;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] == '-')
			neg++;
		if (s[len] >= '0' && s[len] <= '9')
		{
			tens *= 10;
			num_len++;
		}
	}
	tens /= 10;
	for (i = len - num_len; i < len; i++)
	{
		digit = s[i] - 48;
		number += digit * tens;
		tens /= 10;
	}
	if (neg % 2 != 0)
		return (number * -1);
	return (number);
}
