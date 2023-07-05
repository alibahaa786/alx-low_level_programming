#include "main.h"

/**
 * _pow_recursion - function
 * @x: int
 * @y: int
 * Return: result
*/

int _pow_recursion(int x, int y)
{
	if (y - 1)
		return (x * _pow_recursion(x, (y - 1)));
	return (x);
}
