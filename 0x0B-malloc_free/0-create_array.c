#include "main.h"
#include <stdlib.h>
/**
 * create_array - main func
 * @size: int
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;


	array = malloc(size);
	if (array == NULL || size < 1)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
