#include "lists.h"
/**
 * list_len- a function that returns the number of elements
 * @h: head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	const list_t *current = h;

	for (count = 0; current != NULL; count++)
	{
		current = current->next;
	}

	return (count);
}
