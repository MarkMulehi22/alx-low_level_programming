#include "main.h"

/**
 * print_diagonal- function that draws a diagonal line on the terminal.
 * @n: number of times the variable is to be printed
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
		int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
