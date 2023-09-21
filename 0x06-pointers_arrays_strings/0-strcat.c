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
	char *result = dest;

	while (*dest != '\0')
	{
		*dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		*src++;
		*dest++;
	}
	return (result);
}
