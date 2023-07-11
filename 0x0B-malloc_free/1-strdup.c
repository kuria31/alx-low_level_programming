#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: The string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int size = strlen(str) + 1;
	
	if (str == NULL)
	{
		return (NULL);
	}

	string = (char *)malloc(size * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}
	strcpy(string, str);
	return (string);
}
