#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 * @argc: int
 * @argv: char
 * Return: int
 */
int main(int argc, char **argv)
{
	int i, val, sum = 0;
	int error = 0;
	char *next;
	for (i = 1; i < argc; i++)
	{
		val = strtol (argv[i], &next, 10);
		if (next == argv[i] || *next != '\0')
			error = 1;
		else
			sum = sum + val;
	}
	if (error == 0)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
