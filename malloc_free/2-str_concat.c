#include <stdlib.h>

/**
 * str_concat - concatène deux chaînes dans un nouvel espace mémoire.
 * @s1: première chaîne (peut être NULL).
 * @s2: seconde chaîne (peut être NULL).
 *
 * Return: pointeur vers la nouvelle chaîne concaténée,
 *         ou NULL si allocation échoue.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    unsigned int i, j;
    unsigned int len1 = 0, len2 = 0;

    /* Traiter les chaînes NULL comme des chaînes vides */
    if (s1 != NULL)
    {
        for (len1 = 0; s1[len1] != '\0'; len1++)
            ;
    }

    if (s2 != NULL)
    {
        for (len2 = 0; s2[len2] != '\0'; len2++)
            ;
    }

    /* Allouer la mémoire pour la nouvelle chaîne (+1 pour '\0') */
    concat = malloc(sizeof(char) * (len1 + len2 + 1));
    if (concat == NULL)
        return (NULL);

    /* Copier s1 dans concat */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copier s2 dans concat après s1 */
    for (j = 0; j < len2; j++)
        concat[i + j] = s2[j];

    /* Terminer la chaîne */
    concat[len1 + len2] = '\0';

    return (concat);
}
