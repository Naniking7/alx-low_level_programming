#include "main.h"

/**
 *_strdup - returns a pointer to a newly alloctaed
 *space in memory which contains a copy of the string
 *passed.
 *@str: pointer to string being duplicated.
 *
 *Return: NULL if str is NULL and insufficient memory or
 *a pointer to duplicated string on success
 */

char *_strdup(char *str)
{
	char *numstr;
	unsigned int length, a;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	numstr = malloc(sizeof(char) * (length + 1));
	if (numstr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < length; a++)
	{
		numstr[a] = str[a];
	}
	numstr[length] = '\0';
	return (numstr);

}
