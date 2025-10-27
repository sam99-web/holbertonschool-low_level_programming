#include <unistd.h>

/**
 * _putchar - écrit le caractère c sur la sortie standard
 * @c: le caractère à imprimer
 *
 * Return: 1 si succès, -1 si erreur, et errno est défini correctement
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}


