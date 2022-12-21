#include "main.h"
/**
 * _strcat - concatenates the string pointed by source
 * @dest: copy to
 * @src: copy from
 * Return: points to destination
 *
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index++]; index++)
		dest[dest_lent++] = src[index];

	return (dest);
}

