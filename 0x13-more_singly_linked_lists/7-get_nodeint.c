#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list.
 * @head: pointer.
 * @index: intger.
 * Return: next node or Null.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && (count < index))
	{
		temp = temp->next;
		count++;
	}

	if (count < index)
		return (NULL);

	return (temp);
}
