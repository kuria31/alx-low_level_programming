#include "lists.h"
/**
 *  print_list - function that prints all the elements
 *  @h: the head
 *  Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
		}
	}
		return (i);
}
