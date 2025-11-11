#include <stdio.h>
#include "main.h"

int main(void)
{
    int **grid;
    int i, j;

    grid = alloc_grid(3, 2);
    if (grid == NULL)
    {
        printf("Allocation failed\n");
        return (1);
    }

    /* Affichage de la grille */
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", grid[i][j]);
        printf("\n");
    }

    /* Libération de la mémoire */
    for (i = 0; i < 2; i++)
        free(grid[i]);
    free(grid);

    return (0);
}
