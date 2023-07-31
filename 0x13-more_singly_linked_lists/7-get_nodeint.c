#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: the head
 * @index: the nth node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}

	current = head;
	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
