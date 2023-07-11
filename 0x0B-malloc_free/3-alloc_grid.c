#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function
 * @width: integer
 * @height: integer
 * Return: grid
*/

int **alloc_grid(int width, int height)
{
	char **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return ('\0');
	*grid = malloc(sizeof(char) * height);
	grid = malloc(sizeof(char) * width);
	if (!grid || !*grid)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*grid[i][j] = "0";
		}
	}
	return (*grid);
}
