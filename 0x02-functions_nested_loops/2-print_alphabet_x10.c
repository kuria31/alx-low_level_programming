#include "main.h"
/**
 *  print_alphabet_x10-  a function that prints 10 times the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i, c;

	for (c = 0; c < 9; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
