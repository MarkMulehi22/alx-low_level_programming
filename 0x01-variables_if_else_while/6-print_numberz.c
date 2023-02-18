#include <stdlib.h>
#include <stdio.h>
/**
 * main- program that prints all singl
 * e digit numbers of base 10 starting from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
