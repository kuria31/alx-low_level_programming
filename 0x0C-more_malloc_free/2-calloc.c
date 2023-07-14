#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc -  function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
