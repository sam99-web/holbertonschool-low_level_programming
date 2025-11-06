#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Description: This program prints all arguments passed to it,
 *              including the program name. Each argument is printed
 *              on a separate line, followed by a new line.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
