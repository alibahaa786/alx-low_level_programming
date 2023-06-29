#include "main.h"

/**
 * reverse_array - fi=unction
 * @a: pointer
 * @n: input
 * Return: Null
*/

void reverse_array(int *a, int n)
{
	int i;
	char current;

	for (i = 0; i < n / 2; i++)
	{
		current = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = current;
	}
}
