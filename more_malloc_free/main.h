#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: ton_nom (remplace par ton nom si tu veux)
 * Desc: Header file contenant les prototypes des fonctions
 *       utilisées dans le projet malloc_checked.
 */

#include <stdlib.h>

/* Prototypes */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
