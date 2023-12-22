#include <stdio.h>

/**
 * main - Entry point of the program
 * Prints: The sum of the even-valued terms
 * considering values not exceeding 4000000
 * followed by a new line
 * Returns: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%ld", sum);
	return (0);
}
