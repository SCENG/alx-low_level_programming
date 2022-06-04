#include <stdio.h>

/**
 * main - print lowercase
 * Return: 0
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		/*this loop prints lowercase alphabet*/
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		/*this loop print uppercase alphabet*/
		putchar(upper);
		upper++;
	}

	putchar('n\');

	return (0);
}
