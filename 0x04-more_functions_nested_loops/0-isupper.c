#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: letter to check
 * Return: 0 if lowercase and 1 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
