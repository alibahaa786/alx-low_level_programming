#include "main.h"

/**
 * if_div - function
 * n: number
 * div: int
 * Return: 1 or 0
*/

int if_div(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (if_div(n, div + 1));
}

/**
 * is_prime_number - function
 * @n: int
 * Return: 1 or 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (if_div(n, 2));
}
