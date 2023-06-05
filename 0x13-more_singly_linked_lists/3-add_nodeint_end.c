#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer.
 * @n: new node value.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_node = malloc(sizeof(listint_t));
	listint_t *nodee;

	if (!head || !_node)
	{
		return (NULL);
	}
	_node->next = NULL;
	_node->n = n;
	if (!*head)
		*head = _node;
	else
	{
		nodee = *head;
		while (nodee->next)
			nodee = nodee->next;
		nodee->next = _node;
	}
	return (_node);
}
