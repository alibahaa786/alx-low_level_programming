#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: array
 * @size: size of array
 * @cmp: callback function
 * Return: -1 or index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
