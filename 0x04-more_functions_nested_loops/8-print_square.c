#include "main.h"

/**
 *  print_square - prints hashes square
 *  @size: size of the square
 *
 *  Return: no return
 */
void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 0; j < size; j++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
