#include "main.h"
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
	int n = 1;
	int h = 0;

	while (*dest != '\0')
	{
		++*dest;
		n++;
	}
	while (*src != '\0')
	{
		dest[n] = *src;
		*src++;
		n++;
	}
	return (dest);
}
