#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring or
 * NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *aH;
	char *bN;

	while (*haystack != '\0')
	{
		aH = haystack;
		bN = needle;

		while (*haystack != '\0' && *bN != '\0' && *haystack == *bN)
		{
			haystack++;
			bN++;
		}
		if (!*bN)
			return (aH);
		haystack = aH + 1;
	}
	return (0);
}
