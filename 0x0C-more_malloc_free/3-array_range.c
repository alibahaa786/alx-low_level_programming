#include "main.h"
#include <stdlib.h>

/**
 * array_range - fucntion
 * @min: integer
 * @max: integer
 * Return: null or array
*/

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
