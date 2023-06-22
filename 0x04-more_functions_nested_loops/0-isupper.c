#include "main.h"

/**
 * _isupper - check if upper
 * @c: input
 * Return: 1 if correct
*/

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	else
		return (0);
}
