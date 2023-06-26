#include "main.h"

/**
 * _atoi - print integer only
 * @s: ppointer
 * Return: integer
*/

int _atoi(char *s)
{
	int len;
	int neg_pos;
	int tens = 1;
	int num_len = 0;
	int number = 0;
	int i;

	neg_pos = 0;
	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] == '-')
			neg_pos--;
		else if (s[len] == '+')
			neg_pos++;
		if (s[len] >= '0' && s[len] <= '9')
		{
			tens *= 10;
			num_len++;
		}
	}
	tens /= 10;
	for (i = len - num_len; i < len; i++)
	{
		number += (s[len] - 48) * tens;
		tens /= 10;
	}
	if (neg_pos < 0)
		number *= -1;
	return (number);
}
