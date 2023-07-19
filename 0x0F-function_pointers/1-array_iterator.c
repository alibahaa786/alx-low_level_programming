#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: array
 * @size: size of array
 * @action: callback function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[size]);
}
