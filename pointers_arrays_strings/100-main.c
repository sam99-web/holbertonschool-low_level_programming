#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("%d\n", _atoi("1234"));          /* 1234 */
	printf("%d\n", _atoi("   ---+--+4567")); /* -4567 */
	printf("%d\n", _atoi("Holberton42"));   /* 42 */
	printf("%d\n", _atoi("No numbers"));    /* 0 */
	return (0);
}
