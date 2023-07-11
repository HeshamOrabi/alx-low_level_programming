#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: pointer to 2D array, or NULL if malloc fails
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		*(arr + x) = malloc(sizeof(int) * width);

		if (*(arr + x) == NULL)
		{
			for (; x >= 0; x--)
			{
				free(*(arr + x));
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
