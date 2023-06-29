#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0; j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j <n && src != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
