#include "main.h"
/**
 * is_palindrome - a function that checks if a number is palindrome or not
 * @s: string 
 * Return: 0
 */
int is_palindrome(char *s)
{
	int str_len (int l)
	{
		if (l < 1)
		{
			return (0);
		}
		else
		{
			return (1 + str_len(l + 1));
		}
	}
	int len = str_len;
	
	if (len <= 1)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
		{
			return (is_palindrome((s + 1), (len - 1)));
		}

	return (0);
}
