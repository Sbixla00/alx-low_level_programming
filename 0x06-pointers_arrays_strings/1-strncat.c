#include "main.h"
#include <string.h>
/**
 *_strncat - conctenates two strings
 *
 *@dest:destination
 *@src:source
 *@n : bytes from src
 *
 *Return:char
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = strlen(dest);
	int h = 0;

	while (h < n)
	{
		dest[x] = *src;
		*src++;
		x++;
		h++;
	}
	return (dest);
}
