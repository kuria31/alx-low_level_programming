#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: string
 * Return: 0
 */
char *cap_string(char *s)
{
	while (s)
	{
	if (s >= 'a' && s <= 'z')
	{
		s = s - 32;
	}
	s++;
	}
}
