#include "main.h"

int main(void)
{
    char *s;

    s = _strdup("Duplicated");
    if (s == NULL)
    {
        printf("Memory allocation failed or input is NULL\n");
        return (1);
    }

    printf("Duplicated string: %s\n", s);
    free(s);
    return (0);
}
