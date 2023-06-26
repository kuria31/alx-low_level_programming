#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: a variable
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
