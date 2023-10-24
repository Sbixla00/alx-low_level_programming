#include "lists.h"
/**
 *  * pop_listint - Removes the head node of a listint_t list.
 *   * @head: A pointer to the pointer to the head of the list.
 *    *
 *     * Return: The data of the removed head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
	int data = 0;

if (!head || !*head)
	return (data);
	listint_t *temp = (*head)->next;

	data = temp->n;
	free(*hand);
	*head = node;
return (data);
}
