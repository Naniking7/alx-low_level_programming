#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 * @n: number of times to print '_'
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;

		for (a = 1 ; i <= n ; a++)
			_putchar('_');
		_putchar('\n');
	}
}
