#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: letter to check
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
