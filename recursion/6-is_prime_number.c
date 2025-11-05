#include "main.h"

/**
 * check_prime - Vérifie récursivement si n est divisible par i
 * @n: le nombre à tester
 * @i: le diviseur potentiel
 * Return: 1 si premier, 0 sinon
 */
int check_prime(int n, int i)
{
    if (i * i > n)     /* Si on a dépassé la racine carrée */
        return (1);    /* Aucun diviseur trouvé → premier */
    if (n % i == 0)    /* Si n est divisible par i */
        return (0);    /* Pas premier */
    return (check_prime(n, i + 1)); /* Sinon, on essaie avec le suivant */
}

/**
 * is_prime_number - Détermine si un entier est premier
 * @n: le nombre à tester
 * Return: 1 si premier, 0 sinon
 */
int is_prime_number(int n)
{
    if (n <= 1)        /* 0, 1, négatifs → pas premiers */
        return (0);
    return (check_prime(n, 2));  /* Appel récursif à partir de 2 */
}
