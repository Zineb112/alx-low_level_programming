#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer.
 */
void free_listint2(listint_t **head)
{
	listint_t *_node, *temp;

	if (!head)
		return;
	_node = *head;
	while (_node)
	{
		temp = _node;
		_node = _node->next;
		free(temp);
	}
	*head = NULL;
}
