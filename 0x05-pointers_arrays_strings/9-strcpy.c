#include "main.h"
/**
 *_strcpy - copies the strings pointed by 'src' including end nullbyte to the buffer pointed to by 'dest'
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
