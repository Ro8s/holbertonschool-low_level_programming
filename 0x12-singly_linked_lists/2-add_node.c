#include "lists.h"

/**
 * add_node - add a node
 * @head: the head
 * @str: string
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	int c = 0;
	list_t n;

	while (str[c] != '\0')
		c++;
	c--;
	n = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (0);
	n->str = strdup(n);
	n->len = c;
	n->next = *head;
	*head = n;
	return (n);
}
