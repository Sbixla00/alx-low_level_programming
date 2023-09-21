#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
        int n = 1;
        int h = 0;

        while (*dest != '\0')
        {
                *dest++;
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
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
