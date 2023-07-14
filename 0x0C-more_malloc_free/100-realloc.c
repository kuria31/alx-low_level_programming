#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block
 * @ptr: is a pointer to the memory
 * @old_size: previous ptr size
 * @new_size: new ptr size
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *string;
	size_t copy_size = (old_size < new_size) ? old_size : new_size;

	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0)
	{
		return (NULL);
	}
	string = malloc(new_size);
	if (string == NULL)
	{
		return (NULL);
	}
	memcpy(string, ptr, copy_size);
	free(ptr);
	return (string);
}
