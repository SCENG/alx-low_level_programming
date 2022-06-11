#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: numbers of characters to draw
 */

void print_diagonal(int n)
{
	int draw;
	int gap;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (gap = 1; gap < draw; gap++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
