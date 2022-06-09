#include <stdio.h>
#include "main.h"

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long i, fib1, fib2;
	fib1 = 1;
	fib2 = 2;

	printf("%lu", fib1);

	for (i = 0; i < 50; i++)
	{
		printf(", %lu", fib2);
		fib2 += fib1;
		fib1 = fib2 - fib1;
	}
	printf("\n");
	return (0);
}
