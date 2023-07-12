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
	int i;
	int **string = 0;

	if (string == NULL)
	{
		return (NULL);
	}
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	string = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		string[i] = (int *)malloc(height * sizeof(int));
	}
	return (string);
}
