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

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	char c = "A";

	while (c <= 'Z')
	{
		putchar(c);
		c++
	}
	putchar('\n');
	return (0);
}
