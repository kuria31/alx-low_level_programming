#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments in the program
 * @ac: an integer
 * @av: a character pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i;
	int TotalLen = 0;
	size_t currentposition = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		TotalLen += strlen(av[i]) + 1;
	}
	result = malloc((TotalLen + 1) * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(result + currentposition, av[i]);
		currentposition += strlen(av[i]);
		result[currentposition] = '\n';
		currentposition++;
	}
	result[TotalLen] = '\0';
	return (result);
}
