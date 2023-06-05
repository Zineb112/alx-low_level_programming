#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer.
 * Return: int.
 */
int pop_listint(listint_t **head)
{
	listint_t *_node;
	int i;

	if (!head || !*head)
		return (0);
	_node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = _node;
	return (i);
}
