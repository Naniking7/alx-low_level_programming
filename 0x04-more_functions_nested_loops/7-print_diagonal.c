#include "main.h
"
/**
 * print_diagonal - prints diagonal using the '\' character
 * @n: number of times to print '\'
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1 ; a <= n ; a++)
		{
			if (a > 1)
			{
				for (b = 1 ; b <= a -1 ; b++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
