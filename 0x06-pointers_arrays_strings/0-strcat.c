#include "main.h"
/**
* _strcat -  function that concatenates two strings
* @dest: The first string
* @src: Another string
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
		while (src[j] != '\0')
		{
			src[j] = dest[i];
			i++;
			j++;
		}
	dest[j] = '\0';
	return (dest);
}
