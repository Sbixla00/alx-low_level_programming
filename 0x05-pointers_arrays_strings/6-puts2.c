#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints one char out of 2
 * @str: type
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			printf("%c", s[i]);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
}
