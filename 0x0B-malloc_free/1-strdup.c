
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - main func
 * @str: char
 * Return: char
 */
char *_strdup(char *str)
{
	unsigned int size = 0, i = 0;
	char *cop;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	cop = malloc(sizeof(char) * (size + 1));

	if (cop == NULL)
		return (NULL);
	while (i < size)
	{
		cop[i] = str[i];
		i++;
	}
	cop[size + 1] = '\0';
	return (cop);
}
