#include <stdio.h>

/**
 * main - print numbers less 10 using putchar
 * Return: 0
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
