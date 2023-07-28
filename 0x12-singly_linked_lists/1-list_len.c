#include "list.h"
/**
 * list_len - function that returns the number of elements
 * @h: the head
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
