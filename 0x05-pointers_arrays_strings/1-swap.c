#include "main.h"

/**
 * swap_int- function that swaps the values of two integers.
 * @a: parameter to be printed
 * @b: parameter to be printed
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
