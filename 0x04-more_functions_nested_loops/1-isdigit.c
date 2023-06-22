#include "main.h"

/**
 * _isdigit - check if digit
 * @c: inout
 * Return: 1 if succeful
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
