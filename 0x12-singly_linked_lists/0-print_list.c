#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - A function that prints a linked list
 * @h: pointer t  head of list
 * Return: number of nodes in list as size_t
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp = h;

	for (i = 0; tmp; i++)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
	}
	return (i);
}
