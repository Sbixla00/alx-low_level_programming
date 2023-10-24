#include "main."
/**
 *  * free_listint2 - frees a linked list
 *   * @head: pointer to the listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *node;
	if (head == NULL)
	return;
	node = *head;

	while (node)
	{
		current = node;
		node = node->next;
		free(current);
	}
	head = NULL;
}
