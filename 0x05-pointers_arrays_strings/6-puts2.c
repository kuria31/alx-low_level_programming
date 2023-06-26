#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: Astring
 * Return: 0
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
