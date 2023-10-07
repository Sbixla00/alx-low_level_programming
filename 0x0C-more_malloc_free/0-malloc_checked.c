#include "main.h"
/**
 * * malloc_checked - allocates memory
 * * @b: n.o of bytes
 * * Return: return a void ptr
*/
void *malloc_checked(unsigned int b)
{
	char *m = malloc(b);

	if (m == NULL)
	exit(98);
	return (m);
}
