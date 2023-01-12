#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints multiplication of integers
 * @argc: argument count
 * @argv: argument vector
 * Return: the int converted from the string
 *
 */
int main(int argc, char *argv[])
{

int a, b;

if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}
