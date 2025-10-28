#include <stdio.h>
#include "main.h"

/**
 * main - check the code for _strlen
 *
 * Return: Always 0
 */
int main(void)
{
    char *str;
    int len;

    str = "Hello, world!";
    len = _strlen(str);
    printf("La longueur de '%s' est : %d\n", str, len);

    str = "C programming";
    len = _strlen(str);
    printf("La longueur de '%s' est : %d\n", str, len);

    str = "";
    len = _strlen(str);
    printf("La longueur de la chaîne vide est : %d\n", len);

    return (0);
}
