#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *puts_half - prints last half of a string
 *
 *@str:input
 *
 *Return:void
 *
 */
void puts_half(char *str)
{
	int len = strlen(str), n, i;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
		n = (len - 1) / 2;
	for (i = n; i  < len ; i++)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
