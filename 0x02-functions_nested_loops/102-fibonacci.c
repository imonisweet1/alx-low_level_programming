#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Prints the first 50 Fibonacci number
 * The sequence starts with 1 and 2
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", j);
	else if (i == 1)
	printf(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
