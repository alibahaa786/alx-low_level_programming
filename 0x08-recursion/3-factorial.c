#include "main.h"

/**
 * factorial - function
 * @n: integer
 * Return: result
*/

int factorial(int n)
{
	int result = 1;
	
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	result *= factorial(n-1);
	return (result);
}
