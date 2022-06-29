#include "main.h"

/**
 * *create_array - creates an array of chars, and
 * initialises it with a specific char
 * @size: size of char array
 * @c: character to insert
 * Return: NULL id sizes is zero or if it fails
 * pointer to array if everything is normal.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
