#include "main.h"

/**
 * _strlen- A function that returns the value of the length of
 * a string
 * @s: parameter
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
