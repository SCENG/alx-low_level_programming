#include <stdio.h>
#include "main.h"

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%ld, %ld ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
	{
		printf("%ld", a);
	}
	printf("\n");

	return (0);
}
