#include "main.h"
/**
 * times_table - function that prints the 9 times table
 */
void times_table(void)
{
	int i, j, mul, rem, num

	for (i = 0;i <= 9;i++)
	{
		for (j = 0;j <= 9; j++)
		{
			mul = i * j;
			if (mul > 9)
			{
				rem = mul % 10;
				num = (mul - rem) / 10 
					_putchar(44);
				        _putchar(32);
					_putchar(num + '0');
					_putchar(rem + '0');
			}
			else 
			{
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}
