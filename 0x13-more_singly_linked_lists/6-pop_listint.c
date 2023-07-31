#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: the head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *newHead;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;

	newHead = (*head)->next;

	free(*head);

	*head = newHead;

	return (n);
}
