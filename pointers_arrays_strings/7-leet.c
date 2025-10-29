#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to modify
 *
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL";
	char codes[] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = codes[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
