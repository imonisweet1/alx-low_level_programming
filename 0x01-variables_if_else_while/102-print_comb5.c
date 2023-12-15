#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1_tens, num1_units, num2_tens, num2_units;

	for (num1_tens = 0; num1_tens < 10; num1_tens++)
	{
		for (num1_units = 0; num1_units < 10; num1_units++)
		{
			for (num2_tens = 0; num2_tens < 10; num2_tens++)
			{
				for (num2_units = 0; num2_units < 10; num2_units++)
				{
					if (num2_tens > num1_tens || (num2_tens == num1_tens && num2_units >= num1_units))
					{
						putchar(num1_tens + '0');
						putchar(num1_units + '0');
						putchar(' ');
						putchar(num2_tens + '0');
						putchar(num2_units + '0');

						if (!(num1_tens == 9 && num1_units == 9 && num2_tens == 9 && num2_units == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
