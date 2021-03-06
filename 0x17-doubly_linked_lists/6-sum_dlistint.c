#include "lists.h"

/**
 * sum_dlistint - sum the n numbers of the list
 * @head: header
 * Return: the n numbers summed
 */
int sum_dlistint(dlistint_t *head)
{
	int c = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		c += head->n;
		head = head->next;
	}
	return (c);
}
