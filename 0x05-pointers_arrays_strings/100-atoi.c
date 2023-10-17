#include "main.h"
#include <stdio.h>
/**
 *_atoi - converts a string to an integer.
 *@s: pointer(parameter) to string.
 *
 *Return: result integer
 */

int _atoi(char *s)
{
	int a, b;
	unsigned int c;
	int d = 1;
	char e;

	a = 0;
	c = 0;
	while (*(s + a) != '\0')
	{
		e = *(s + a);
		if (e == '-')
		{
			d *= -1;
		}
		if (e >= '0' && e <= '9')
		{
			b = a;
			while (*(s + b) > 47 && *(s + b) < 58)
			{
				c = (c * 10) + *(s + b) - '0';
				b++;
			}
			break;
		}
		a++;
	}
	if (d < 0)
		c *= d;
	return (c);
}
