#include "main.h"
/**
 *_strcpy - copies the string pointed by 'src' including the end nullbyte
 *@dest: pointer(parameter) to string to be copied to
 *@src: pointer(parameter) to string to be copied.
 *
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
