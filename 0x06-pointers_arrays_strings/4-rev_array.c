#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @n: the size of an array
 * @a: a string
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
