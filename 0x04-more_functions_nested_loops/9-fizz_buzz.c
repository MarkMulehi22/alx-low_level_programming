#include <stdio.h>
#include <stdout.h>

/**
 * main- A program that prints 1-100
 *  But for multiples of three print Fizz
 *  and for the multiples of five print Buzz
 *  numbers which are multiples of both three and five print FizzBuzz
 *  Return: 0(Success)
 */

int main(void)
{
	int a = 0, b = 0, c = 0;

	for (a = 1; a < 101; a++)
	{
		b = a % 3;
		c = a % 5;
		if (b == 0 && c == 0)
			printf("FizzBuzz");
		else if (c == 0 && b != 0)
			printf("Buzz");
		else if (b == 0 && c != 0)
			printf("Fizz");
		else
			printf("%d", a);
		if (a < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
