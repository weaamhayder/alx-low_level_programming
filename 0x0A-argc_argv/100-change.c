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
	int i, numCoins = 0, c = 0, temp;
	int coins[] = {25, 10, 5, 2, 1};
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	while (c > 0)
	{
		for (i = 0; i < 5; i++)
		{
			temp = c / coins[i];
			if (temp == 0)
				continue;
			numCoins = numCoins + temp;
			c = c % coins[i];
		}
	}
	printf("%d\n", numCoins);
	return (0);
}
