#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the source string
*
* Return: returns a pointer to the duplicated string.
* It returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	size_t length = strlen(str) + 1;
	char *duplicate = (char *)malloc(length);

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
