#include "main.h"

/**
 *print_number - prints an integer
 *@n: integer(parameter) to be printed
 *
 *Return: void
 */

void print_number(int n)
{
	unsigned int dig;

	dig = n;
	if (n < 0)
	{
		_putchar(45);
		dig = -n;
	}

	if (dig / 10)
	{
		print_number(dig / 10);
	}
	_putchar((dig % 10) + '0');
}
