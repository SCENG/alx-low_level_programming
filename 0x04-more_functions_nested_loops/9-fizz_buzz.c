#include "main.h"
#include <stdio.h>

/**
 * main - prints 1 - 100,
 * multiples of 3 with fizz
 * multiples of 5 with buzz
 * multiples of 15 fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	print("\n");
	return (0);
}
