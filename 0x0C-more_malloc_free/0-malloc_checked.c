#include "main.h"

void *malloc_checked(unsigned int b)
{
	char *m = malloc(b);
	
	if (m == NULL)
	exit (98);
	return m;
}
