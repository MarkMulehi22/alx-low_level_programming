#include "main.h"

/**
 * _isdigit -> function that checks for a digit
 * @c: parameter to be printed
 * Return: 1 if c is a digit 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	return (0);
}
