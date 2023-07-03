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
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i][i];
	}
}
