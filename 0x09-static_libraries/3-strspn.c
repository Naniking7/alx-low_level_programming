#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: s which is the only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		c = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				c = 0;
				break;
			}
		}
		if (c == 1)
			break;
	}
	return (a);
}
