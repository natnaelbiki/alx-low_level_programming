#include "lists.h"
/**
 * free_dlistint - free the memory
 * @head: pointer to the head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *mem;

	while (head != NULL)
	{
		mem = head->next;
		free(head);
		head = mem;
	}
}
