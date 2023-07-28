#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * print_list - function that prints all the elements of a list_t lisy
 * @h: this is the head pointing to the first node
 * Return: NUmber of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (str == NULL)
	{
		printf("[0] (nil)");
	}
	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
