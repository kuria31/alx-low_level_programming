#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid -  function that frees a 2 dimensional grid
 * @grid: a pointer
 * @height: the column
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
