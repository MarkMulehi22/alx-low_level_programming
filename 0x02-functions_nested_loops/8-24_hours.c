#include "main.h"

/**
 * jack_bauer-  function that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 * m = minutes, h= hours
 * for loop breaks code before reaching 24:00
 * /10 allows the second digit to rotate
 * Return: 24 hour clock by line
 */

void jack_bauer(void)
{
	int h, m;

	for (h > 0; h < 24; h++)
	{
		for (m > 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
