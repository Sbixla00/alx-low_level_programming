#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * print_rev - prints string
  * @s: input string
  * Return: no return
 */

void print_rev(char *s)
{
	int len = strlen(s), i;

	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);
		putchar('\n');
}
