#include "main.h"
/**
 *puts_half - prints half of a string
 *@str: pointer(parameter) to string
 *
 *Return: void
 */

void puts_half(char *str)
{
	int a, b, c;

	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}

	if (b % 2 == 0)
	{
		c = b / 2;
		for (a = c; a < b; a++)
		{
			_putchar(st([n]);
		}
	}
	else
	{
		c = (b - 1) / 2;
		for (a = c + 1; a < b; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
