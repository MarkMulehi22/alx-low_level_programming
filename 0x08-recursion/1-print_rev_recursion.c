#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion- function to print the string in reverse
 * @s: pointer to a character
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
