#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: this is a string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
