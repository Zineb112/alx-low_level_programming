#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer.
 * @n: new node value.
 * Return: pointer.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_node = malloc(sizeof(listint_t));

	if (!head || !_node)
	{
		return (NULL);
	}
	_node->next = NULL;
	_node->n = n;
	if (*head)
		_node->next = *head;
	*head = _node;
	return (_node);
}
