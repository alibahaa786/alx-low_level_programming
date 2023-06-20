#include "main.h"

/**
 * _isalpha - check if alphabet
 * Return: 1 if true
 * Return: 0 if false
*/

int _islalpha(int c)
{
	if (65 <= c < 91 || 97 <= c <= 122)
		return (1);
	else
		return (0);
}
