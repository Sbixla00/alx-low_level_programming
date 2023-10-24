#include "lists.h"
/**
 *  *print_listint - prints all elements of a print_listint list
 *   *@h:pointer to a listint struct
 *    *Return:no. of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t n;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
