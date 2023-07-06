#include <unistd.h>
/**
 * _putchar - function to print a program
 * @c: character parameter
 * Return: the character
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
