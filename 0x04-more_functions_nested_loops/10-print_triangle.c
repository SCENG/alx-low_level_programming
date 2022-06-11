#include "main.h"

/**
 * print_triangle - print triangle with '#'
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int height, width, draw;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; width <= size; height++)
	{
		for (width = i; width <= (size - height); width++)
			_putchar(' ');

		for (draw = 1; draw <= height; draw++)
			_putchar('#');

		_putchar('\n');
	}
}
