#ifndef MAIN_H
#define MAIN_H
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * If n is 0 or less, only a new line is printed
 */
void print_line(int n);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

#endif /* MAIN_H */
