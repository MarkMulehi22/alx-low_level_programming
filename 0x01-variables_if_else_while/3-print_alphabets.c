#include <stdlib.h>
#include <stdio.h>
/**
 * main- program that prints that prints alphabet in lowecase
 * and in uppercase and prints a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z" && C <= 'Z")
	{
		putchar(c);
		c++;
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
