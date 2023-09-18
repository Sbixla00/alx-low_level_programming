#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 **_strcpy - copies string pointed to by src
 *@dest:destination
 *@src:source
 *
 *Return:pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		str++;
	}
	*dest = '\0';
	return (dest_start);
}
