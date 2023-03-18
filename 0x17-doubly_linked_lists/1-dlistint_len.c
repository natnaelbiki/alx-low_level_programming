#include "lists.h"
/**
 * dlistint_len - Return number of elements in dll
 * @h: pointer to struct of ddl
 * Return: the amount of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_node = 0;

	while (h != NULL)
	{
		h = h->next;
		count_node++;
	}
	return (count_node);
}
