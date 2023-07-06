#include <stdio.h>
/**
 * factorial- function that returns the factorial of any number
 * @n: variable to find the factorial of
 * Return: -1 if n is less than 0, 1 if n is 0 and factorial otherwise
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
