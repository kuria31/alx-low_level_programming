#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: The number
 * Return: 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit + 48);
	return (last_digit);
}
