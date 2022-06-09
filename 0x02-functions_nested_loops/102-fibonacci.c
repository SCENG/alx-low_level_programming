#include <stdio.h>
#include "main.h"

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long i = 0;
	long j = 1;
	int n = 0;
	long fib;

	while (n < 50)
	{
		fib = i + j;
		if (n != 49)
		{
			printf("%lu, ", fib);
		}
		else
		{
			printf("%lu\n", fib);
		}
		i = j;
		j = fib;
		n += 1;
	}
	return (0);
}
