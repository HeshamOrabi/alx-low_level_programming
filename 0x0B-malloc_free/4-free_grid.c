#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers
 * @grid: pointer to the 2D array to free
 * @height: height of the 2D array
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(*(grid + x));
	}
	free(grid);
}
