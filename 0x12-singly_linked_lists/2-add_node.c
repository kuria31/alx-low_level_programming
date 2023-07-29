#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * @head: the head
 * @str: the data
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
	{
		return (NULL);
	}

	newNode =  malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode->str);
		return (NULL);
	}
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
