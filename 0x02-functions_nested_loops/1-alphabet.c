#include "main.h"

/**
 * main -  prints the alphabet
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
