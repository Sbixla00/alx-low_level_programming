#include "main.h"
#include <string.h>
/**
 *_strcat - conctenates two strings
 *
 *@dest:destination
 *@src:source
 *
 *Return:char
 *
 */
char *_strcat(char *dest, char *src)
{
	int n = strlen(dest);
	int h = 0;

	while (*src != '\0')
	{
		dest[n] = *src;
		*src++;
		n++;
	}
	return (dest);
}
