#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->n = n;
	new->next = head;
	head = new;
	return (new);
}
