#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a list
 * @head: the head
 * @n: interger
 * Return: a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
	{
		return (NULL);
	}

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
	}
	else
	{
		listint_t *newNode = *head;

		while (newNode->next != NULL)
		{
			newNode = newNode->next;
		}
		newNode->next = current;
	}
	return (current);
}
