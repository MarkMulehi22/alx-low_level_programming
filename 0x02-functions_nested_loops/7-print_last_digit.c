#include "main.h"

/**
 * print_last_digit- function that prints the last digit of a number.
 * @n: parameter to be printed
 * Return: 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
