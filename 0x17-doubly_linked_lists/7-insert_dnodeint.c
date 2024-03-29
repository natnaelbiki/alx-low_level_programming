#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node in any position
 * @h: pointer to dxn of the head
 * @n: the data integer
 * @idx: position at the insert the new node
 * Return: the dxn of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_mem, *res_mem = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		if (res_mem == NULL)
			return (NULL);
		res_mem = res_mem->next;
	}
	if (res_mem->next == NULL)
		return (add_dnodeint_end(h, n));
	new_mem = malloc(sizeof(dlistint_t));
	if (new_mem == NULL)
		return (NULL);
	new_mem->n = n;
	new_mem->next = res_mem->next;
	new_mem->prev = res_mem;
	res_mem->next->prev = new_mem;
	res_mem->next = new_mem;
	return (new_mem);
}
