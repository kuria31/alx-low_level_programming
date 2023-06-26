#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers.
 * @a: A variable to swap
 * @b: another variable
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
