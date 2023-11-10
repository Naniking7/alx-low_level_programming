#include "main.h"
/**
 *_strlen - returns the length of string
 *@s: pointer(parameter) to string
 *
 *Return: length of a string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
