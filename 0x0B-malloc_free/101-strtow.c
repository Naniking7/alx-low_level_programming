#include "main.h"
#include <stdlib.h>

/**
 * count_word - help function that counts the number of words in a string
 * @s: string to count
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int p, q, r;

	p = 0;
	r = 0;

	for (q = 0; s[q] != '\0'; q++)
	{
		if (s[q] == ' ')
			p = 0;
		else if (p == 0)
		{
			p = 1;
			r++;
		}
	}
	return (r);
}

/**
 * **strtow - splits a string into  words
 * @str: string to split
 *
 * Return: NULL if str == NULL or str == "" or fail
 */

char **strtow(char *str)
{
	int dis = 0, a, w, b = 0, c = 0, bgn, stp;
	char **mat, *tem;

	while (*(str + dis))
		dis++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	mat = (char **) malloc(sizeof(char *) * (w + 1));
	if (mat == NULL)
		return (NULL);

	for (a = 0; a <= dis; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				stp = a;
				tem = (char *) malloc(sizeof(char) * (c + 1));
				if (tem == NULL)
					return (NULL);
				while (bgn < stp)
					*tem++ = str[bgn++];
				*tem = '\0';
				mat[b] = tem - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			bgn = a;
	}
	mat[b] = NULL;

	return (mat);
}
