#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: the size of the array
 * @cmp: pointer to the function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
/**
 * compare - function of elemets
 * @element: the elements;
 * @target: the target elements
 * Return: 0
 */

int compare(int element, int target)
{

	return (element == target);
}
