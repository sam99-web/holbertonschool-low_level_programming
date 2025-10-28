#include <stdio.h>
#include "main.h"

int main(void)
{
	int num = 0;

	printf("Avant : %d\n", num);
	reset_to_98(&num);
	printf("Après : %d\n", num);

	return 0;
}
