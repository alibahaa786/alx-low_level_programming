#include "main.h"

/**
 * set_bit - function
 * @n: int
 * @index: n
 * Return: 1 or 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
