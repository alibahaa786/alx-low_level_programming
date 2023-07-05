#include "main.h"

/**
 * factorial - function
 * @n: integer
 * Return: result
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	if (n > 0)
		return (n + factorial(n-1));
}
