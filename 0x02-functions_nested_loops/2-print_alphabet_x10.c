#include "main.h"

/**
 * print_alphabet_x10-> a function that prints 10 times the alphabet
 * Return: 0 (Suceess)
 */

void print_alphabet_x10(void)
{
	int k;
	int j;

	for (k = 0; k < 10; k++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
