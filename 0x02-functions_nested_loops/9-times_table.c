#include "main.h"
/**
 * times_table - function that prints the 9 times table
 * Return: 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0;i <= 9;i++)
	{
		for (j = 0;j <= 9; j++)
		{
			_putchar(i * j + '0');
			_putchar(i * j + '0');
			j++
		}
		i++;
	}
}
