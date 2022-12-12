#include <stdio.h>
/**
* main - prints all single digit number of base 10
* starting from 0, followed by a new line
* Return: Always 0
*/
in main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
