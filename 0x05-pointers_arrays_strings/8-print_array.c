#include "main.h"
#include <stdio.h>

/**
 * print_array - print array
 * @a: pointer
 * @n: pointer
 * Return: null
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
