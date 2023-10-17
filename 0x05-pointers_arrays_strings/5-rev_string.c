#include "main.h"
/**
 *rev_string - reverses a string
 *@s: pointer to the string
 *
 *Return: void
 */
void rev_string(char *s)
{
	int a, b, c, end;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;

	while (c < b)
	{
		end = s[c];
		s[c] = s[b];
		s[b] = end;
		c++;
		b--;
	}
}
