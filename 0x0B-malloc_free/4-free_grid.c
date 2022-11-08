#include "main.h"
#include <stdlib.h>
/**
 * free_grid - main func
 * @grid: int
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	for (i = 0; i < height; i++)
		free(grid[i]);
}
