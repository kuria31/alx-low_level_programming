#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*malloc_checked - function that allocates memory using malloc
* @b: size of the pointer
* Return: 0
*/
void *malloc_checked(unsigned int b)
{
void *string;
string = malloc(b);
if (string == NULL)
{
exit(98);
}
return (string);
}
