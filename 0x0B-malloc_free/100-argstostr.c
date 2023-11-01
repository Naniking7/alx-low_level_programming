#include "main.h"

/**
 *argstostr - concatenates all arguments of the program.
 *@ac: argument count
 *@av: pointer to array of size ac
 *Return: a pointer to a new string or NULL if ac == 0 or av == NULL
 *and on fail
 */

char *argstostr(int ac, char **av)
{
	int e, length = 0, f, g = 0,;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (f = 0; av[e][f]; f++)
			length++;
	}
	length += ac;

	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (f = 0; av[e][f]; f++)
		{
			str[g] = av[e][f];
			g++;
		}
		if (str[g] == '\0')
		{
			str[g++] = '\n';
		}
	}
	return (str);
}
