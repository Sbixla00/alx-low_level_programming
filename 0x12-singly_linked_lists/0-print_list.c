#include "lists.h"

/**
 *  * print_list - A function that prints a linked list
 *   * @h: pointer t  head of list
 *    * Return: number of nodes in list as size_t
*/
size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{

			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
