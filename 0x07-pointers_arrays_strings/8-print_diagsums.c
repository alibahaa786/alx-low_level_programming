#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * @a: pointer
 * @size: input
 * Return: Null
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[i][i];
	while (size--)
		sum2 += a[size][size];
	printf("%d, %d", sum1, sum2);
}
