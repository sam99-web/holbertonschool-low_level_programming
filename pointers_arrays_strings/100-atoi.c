#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sign == 1)
		{
			if (result > (INT_MAX - (s[i] - '0')) / 10)
				return (INT_MAX);
		}
		else
		{
			if (result < (INT_MIN + (s[i] - '0')) / 10)
				return (INT_MIN);
		}

		result = result * 10 + (s[i] - '0') * sign;
		i++;
	}

	return (result);
}
