#include "main.h"

/**
 *
 * @a: pointer
 * @n: input
 * Return: Null
*/

void reverse_array(int *a, int n)
{
	int i;
	int n_lmt;

	for (i = 0; i < n / 2; i++)
		a[i] = a[n-1-i];
}
