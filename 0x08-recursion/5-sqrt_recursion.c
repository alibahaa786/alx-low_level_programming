#include "main.h"

/**
 * find_root - function
 * @n: number
 * @root: result
 * Return: root
*/

int find_root(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root >= n / 2)
		return (-1);
	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - function
 * @n: input
 * Return: result
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_root(n, 0));
}
