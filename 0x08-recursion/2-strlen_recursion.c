#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion- function to print the length of a string
 * @s: pointer to a character
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
