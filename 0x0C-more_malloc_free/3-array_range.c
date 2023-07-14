#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers
 * @min: minumum integer
 * @max: maximum integer
 * Return:the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
