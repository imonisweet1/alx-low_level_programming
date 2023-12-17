#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 less than 1024
 * Return: Always succefull
 */

int main(void)
{
	int limit = 1024;
	int sum = 0;

	for (int i = 0; i < limit; ++i)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	sum += i;
	}
	}
	printf("%d\n", sum);
	return (0);
}
