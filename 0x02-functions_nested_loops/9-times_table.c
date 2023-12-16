#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 * Returns: empty output
 */

void times_table(void)
{
	int i = 0;

	while (i <= 10)
	{
	int result = 9 * i;

	if (result >= 10)
	{
	_putchar(result / 10 + '0');
	_putchar(result % 10 + '0');
	}
	else
	{
	_putchar(result + '0');
	}
	_putchar('\n');
	++i;
	}
}
