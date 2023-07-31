#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * @h: the head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		printf("%d, ", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
