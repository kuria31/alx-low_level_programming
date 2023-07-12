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
	char *return1;
	int i;
	int TotalLen = 0;
	size_t currentposition = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		TotalLen = strlen(av[i]) + 1;
	}
	return1 = (char *)malloc((TotalLen + 1) * sizeof(int));
	if (return1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy (return1 + currentposition, av[i]);
		currentposition += strlen(av[i]);
		return1[currentposition] = '\n';
		currentposition++;
	}
	return1[TotalLen] = '\0';
	return (return1);
}
