#include "main.h"

/**
 * flip_bits - function
 * @n: num
 * @m: num
 * Return: num of bits 
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, sum = 0;

	while (x > 0)
	{
		sum += (x & 1);
		x >>= 1;
	}

	return (sum);
}
