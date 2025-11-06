#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Description: This program prints the total number of arguments
 *              passed to it, excluding the program name itself.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
