#include "main.h"

/**
 * print_numbers - prints 0 - 9
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
