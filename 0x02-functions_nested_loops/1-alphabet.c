#include "main.h"

/**
 * print_alphabet-> a function that prints out the letters of the alphabet
 * Return: 0(Success)
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
