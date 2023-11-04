#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string
 * to another string
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to concatenate to s1
 *
 * Return: pointer (on sucess) or NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int strc = 0, strres = 0, lens1 = 0, lens2 = 0;

	while (s1 && s1[lens1])
	{
		lens1++;
	}
	while (s2 && s2[lens2])
	{
		lens2++;
	}
	if (n < lens2)
	{
		result = malloc(sizeof(char) * (lens1 + n + 1));
	}
	else
	{
		result = malloc(sizeof(char) * (lens1 + lens2 + 1));
	}
	if (result == NULL)
		return (NULL);

	while (strc < lens1)
	{
		result[strc] = s1[strc];
		strc++;
	}
	while (n < lens2 && i < (lens1 + n))
	{
		result[strc++] = s2[strres++];
	}
	while (n >= lens2 && strc < (lens1 + lens2))
	{
		reault[strc++] = s2[strres++];
	}
	s[strc] = '\0';

	return (result);
}
