#include "main.h"
/**
 * main -  a function that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
