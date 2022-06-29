#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: Second string
 *
 * Return: NULL if failure, pointer to new string if success
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int i = 0, j = 0, sizes1 = 0, sizes2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[sizes1] != '\0')
		sizes1++;

	while (s2[sizes2] != '\0')
		sizes2++;

	res = malloc(sizeof(char) * (sizes1 + sizes2 + 1));

	if (res == NULL)
		return (NULL);

	while (i < sizes1)
	{
		res[i] = s1[i];
		i++;
	}
	while (j < sizes2)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
