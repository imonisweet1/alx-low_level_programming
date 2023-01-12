#include "main.h"

/**
 *malloc_checked - array for prints a string
 *@b: number of memory
 *Return: 0
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
{
exit(98);
}

return (p);
}
