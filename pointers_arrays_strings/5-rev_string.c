#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 *
 * Description: This function reverses the content of a string
 * in place (without using another array).
 */
void rev_string(char *s)
{
	int i, length = 0;
	char temp;

	/* Trouver la longueur de la chaîne */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Échanger les caractères du début et de la fin */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
