#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size:  size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int b, h;

	if (size > 0)
	{
		for (h = 0; h <= size; h++)
		{
			for (b = size - h; b > 0; b--)
			{
				_putchar('\n');
				for (b = 0; b < h; b++)
				{
					_putchar('#');
				}
			}
			if (h == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
