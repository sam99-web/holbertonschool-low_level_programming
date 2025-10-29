#include "main.h"

/**
 * _strcat - concatenates the src string to the dest string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* append src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'; /* add terminating null byte */
	return (dest);
}
