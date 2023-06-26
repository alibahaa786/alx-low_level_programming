#include "main.h"

/**
 * swap_int - swap
 * @a: pointer
 * @b: pointer
 * Return: Null
*/

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
