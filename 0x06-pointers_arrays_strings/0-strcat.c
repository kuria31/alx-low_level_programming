#include "main.h"
/**
* _strcat -  function that concatenates two strings
* @dest: The first string
* @src: Another string
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
char str[1000];
int i = 0, j = 0;
while (dest[i] != '\0')
{
str[j] = dest[i];
i++;
j++;
}
i = 0;
while (src[i] != '\0')
{
str[j] = src[i];
i++;
j++;
}
str[j] != '\0';
}
