#include "main.h"
/**
 * _puts -  function that prints a string, followed by a new line
 * @str: A string
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putcahr(*str);
	}
	_putchar('\n');
}
