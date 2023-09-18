#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * rev_string - reverses a string
  * @s: input string
  * Return: no return
 */
void rev_string(char *s)
{
int len = strlen(s), i;
int j = len - 1;
char ch;
       
for (i = 0; i <= (len/2); i++)
{
ch = s[j];  
s[j] = s[i];
s[i]= ch;
j--;
}
