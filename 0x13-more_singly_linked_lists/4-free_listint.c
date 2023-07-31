#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: the head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
