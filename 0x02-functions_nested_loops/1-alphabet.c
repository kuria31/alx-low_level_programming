#include "main.h"
/**
 * main -  a function that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
