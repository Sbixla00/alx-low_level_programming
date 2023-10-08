#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * * malloc_checked - allocates memory
 * * @b: n.o of bytes
 * * Return: return a void ptr
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}
