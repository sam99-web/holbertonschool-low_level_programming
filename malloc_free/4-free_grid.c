#include <stdlib.h>

/**
 * free_grid - libère une grille 2D d'entiers créée par alloc_grid
 * @grid: pointeur vers la grille à libérer
 * @height: nombre de lignes de la grille
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    /* Libérer chaque ligne */
    for (i = 0; i < height; i++)
    {
        if (grid[i] != NULL)
            free(grid[i]);
    }

    /* Libérer le tableau de pointeurs */
    free(grid);
}
