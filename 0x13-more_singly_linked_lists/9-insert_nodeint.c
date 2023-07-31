#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @head: the head
 * @idx: ndex of the list where the new node should be added
 * @n: interger
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *newNode, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	current = *head;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	while (current == NULL || current->next)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
