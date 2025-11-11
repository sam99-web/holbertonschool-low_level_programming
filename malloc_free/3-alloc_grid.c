#include <stdlib.h>

/**
 * alloc_grid - crée une grille 2D d'entiers et l'initialise à 0
 * @width: largeur de la grille (nombre de colonnes)
 * @height: hauteur de la grille (nombre de lignes)
 *
 * Return: pointeur vers la grille 2D, ou NULL en cas d'erreur
 *         (width <= 0, height <= 0, ou échec malloc)
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Vérification des dimensions */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocation du tableau de pointeurs (lignes) */
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    /* Allocation de chaque ligne et initialisation à 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            /* Libérer les lignes déjà allouées en cas d'échec */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        /* Initialiser la ligne à 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
