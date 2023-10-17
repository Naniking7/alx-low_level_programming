#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: pointer(parameter) to the string
 *
 *Return: void
 */

void print_rev(char *s)
{
	int len, cast;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	cast = len - 1;
	for (; cast >= 0; cast--)
	{
		_putchar(s[cast]);
	}
	_putchar('\n');
}
