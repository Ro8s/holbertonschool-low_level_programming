#include "lists.h"

/**
 * add_node_end - add a node
 * @head: hed
 * @str: string
 * Return: Return
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *tmp;
	int c = 0;

	if (head == NULL)
		return (0);
	tmp = *head;
	n = malloc(sizeof(list_t));
	while (str[c] != '\0')
		c++;
	if (n == NULL)
		return (NULL);
	if (str == NULL)
		return (0);
	n->str = strdup(str);
	n->len = c;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = n;
	return (n);
	*head = n;
	return (n);
}
