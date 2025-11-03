#include "main.h"
#include <stdio.h>

/**
 * main - check the code for print_diagsums function
 *
 * Return: Always 0.
 */
int main(void)
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    /* cast the 2D array to int* and pass its size */
    print_diagsums((int *)matrix, 3);

    return (0);
}
