#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: struct dog pointer
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("%s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("%f\n", d->age);
	printf("%s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
