#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - function that returns a pointer to a 2D array
 * @width: te row
 * @height: the column
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **string = NULL;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	string = (int **)malloc(height * sizeof(int *));
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		string[i] = (int *)malloc(width * sizeof(int));
		if (string[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(string[j]);
			}
			free(string);
			return (NULL);
		}
	}
	return (string);
}
