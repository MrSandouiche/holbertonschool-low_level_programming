#include <stdlib.h>
#include "main.h"

/**
 * free_grid - permet de liberer la memoire 
 * @grid: pointer
 * @height: hauteur
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
