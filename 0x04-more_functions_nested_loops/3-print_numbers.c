#include "main.h"

/**
 * print_numbers - function that prints the numbers,
 *  from 0 to 9, followed by a new line
 *  Return: 0 (Success)
 */

void print_numbers(void)
{
	i = 0;

	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
