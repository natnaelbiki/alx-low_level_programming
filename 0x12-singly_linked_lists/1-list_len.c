#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - count number of linked list elements
 * @h: head of linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
