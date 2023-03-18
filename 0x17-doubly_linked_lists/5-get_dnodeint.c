#include "lists.h"
/**
 * get_dnodeint_at_index - Return the nth node
 * @head: pointer to the head
 * @index: the node index
 * Return: the dxn of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}
