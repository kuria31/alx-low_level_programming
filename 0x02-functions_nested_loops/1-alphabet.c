#include "main.h"
/**
 * main -  a function that prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	for (i = 0; i < 26; i++)
	{
		_putchar(i);
	}
	_putchr(\n);
}
