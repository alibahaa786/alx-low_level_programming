#include "main.h"

/**
 * _isalpha - check if c is alphabet
 * @c: input
 * Return: 1 if true
 * ptherwise 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
