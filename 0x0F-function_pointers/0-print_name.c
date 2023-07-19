#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: the name
 * (*f)(char *) - pointer to a function;
 * Return: 0
 */
void print(char *name)
{
	int i;
      	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
