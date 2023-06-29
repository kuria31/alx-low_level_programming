#include "main.h"
/**
 * _strcmp -  function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] == s2[i] && s1[i] == '\0')
		i++;

	if (s1[i] < s2[i])
	{
		return (s1 < s2);
	}
	else if (s1[i] > s2[i])
	{
		return (s2 > s1);
	}
	else
	{
		return (s1 == s2);
	}
}
