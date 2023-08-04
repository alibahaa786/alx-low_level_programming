#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_to_uint - function
 * @b: binary
 * Return: int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1;
	int sum;
	unsigned int ret = 0;

	for (sum = 0; b[sum]; sum++)
	{
		if (b[sum] != '1' && b[sum] != '0')
			return (0);
	}
	while (sum--)
	{
		if (b[sum] == '1')
			ret += i;
		i *= 2;
	}
	return (ret);
}
