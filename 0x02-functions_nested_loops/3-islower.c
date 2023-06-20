#include "main.h"
/**
 * _islower- function that checks for lowercase character.
 * @c: this is an int value for the argument
 * Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
