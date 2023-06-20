#include "main.h"

/**
 * _isalpha - check if alphabet
 * Return: 1 if true
 * Return: 0 if false
*/

int _isalpha(int c)
{
	if (65 <= c && c < 91)
		return (1);
	else if (97 <= c && c <= 122)
		return (1);
	else
		return (0);
}
