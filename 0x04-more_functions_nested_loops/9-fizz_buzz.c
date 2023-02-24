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
	int x = 0;
	int y = 0;
	int z = 0;

	for (x = 1; x <= 100; x++)
	{
		y = x % 3;
		z = x % 5;
		if (y == 0 && z == 0)
		{
			printf("Fizzbuzz");
		}
		else if (y == 0 && z != 0)
		{
			printf("Fizz");
		}
		else if (y != 0 && z == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
	if (x < 100)
	{
		printf(' ');
	}
	}
putchar('\n');
return (0);
}
