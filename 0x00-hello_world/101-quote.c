#include <unistd.h>
/**
 * main - Entry point
 *
 * Descreption : A C program that prints with put function
 *
 * Return: Always 0 (success)
*/
int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}
