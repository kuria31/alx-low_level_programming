#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * main - the main function
 * @size: the sizw of the memory loation
 * @c: the characters
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	string = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (0);
	}
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < size; i++)
	{
		string[i] = c;
	}
	return (string);
}
