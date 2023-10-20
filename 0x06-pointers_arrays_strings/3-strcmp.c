#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: "< 0" when string is less than the other
 * "> 0" if string is greater than the other and 0 if strings are equal.
 */

int _strcmp(char *s1, char *s2)
{
	int count;
	int compare;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	compare = s1[count] - s2[count];
	return (compare);
}
