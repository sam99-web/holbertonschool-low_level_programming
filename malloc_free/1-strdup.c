#include <stdlib.h>

/**
 * _strdup - retourne un pointeur vers une copie d'une chaîne donnée.
 * @str: chaîne source à copier.
 *
 * Return: pointeur vers la nouvelle chaîne copiée,
 *         ou NULL si str == NULL ou allocation échoue.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	/* Calculer la longueur de la chaîne source */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allouer de la mémoire pour la nouvelle chaîne (+1 pour '\0') */
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	/* Copier les caractères un par un */
	for (i = 0; i < len; i++)
		dup[i] = str[i];

	/* Ajouter le caractère de fin de chaîne */
	dup[len] = '\0';

	return (dup);
}
