#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: the head
 * @index: the specific index to delete
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *pre;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else if (index != 0)
	{
		pre = current;
		current = current->next;
		index--;
	}
	pre->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
