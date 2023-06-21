#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int hours = 0;
	int min = 0;
	int hours_rem, min_rem;

	while (hours <= 23)
	{
	while (min <= 59)
	{
	hours_rem = hours % 10;
	min_rem = min % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_rem + '0');
	_putchar(':');
	_putchar(min / 10 + '0');
	_putchar(min_rem 10 + '0');
	min++;
	_putchar('\n');
	}
	hours++;
	}
}
