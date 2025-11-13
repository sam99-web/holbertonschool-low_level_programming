#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Description: Returns a pointer to a newly allocated space in memory,
 * containing s1, followed by the first n bytes of s2, and null terminated.
 * If malloc fails, the function returns NULL.
 * If n is greater or equal to the length of s2, the entire s2 is used.
 * If s1 or s2 is NULL, it is treated as an empty string.
 *
 * Return: pointer to the concatenated string, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculate lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* if n is greater than length of s2, use full s2 */
	if (n >= len2)
		n = len2;

	/* allocate memory: len1 + n + 1 for null terminator */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* copy n bytes of s2 into concat */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	/* add null terminator */
	concat[i + j] = '\0';

	return (concat);
}
