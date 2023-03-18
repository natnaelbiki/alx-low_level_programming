#include "lists.h"
/**
 * sum_dlistint - sum of the data
 * @head: pointer to the head
 * Return: the result of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int add_result = 0;

	while (head != NULL)
	{
		add_result += head->n;
		head = head->next;
	}
	return (add_result);
}
