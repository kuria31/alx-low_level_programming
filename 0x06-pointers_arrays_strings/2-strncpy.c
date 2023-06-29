#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: destination of a string
 * @src: the source of the string
 * @n: the number of bytes
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
