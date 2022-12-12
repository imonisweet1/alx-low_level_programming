#include <stdio.h>
/**
* main - prints all single digit number of base 10
* starting from 0, followed by a new line
* Return: Always 0
*/
in main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
