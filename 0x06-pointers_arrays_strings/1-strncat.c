#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen, countn;

	destlen = 0;
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	for (countn = 0; countn < n && src[countn] != '\0'; countn++, destlen++)
	{
		dest[destlen] = src[countn];
	}
	dest[destlen] = '\0';
	return (dest);
}
