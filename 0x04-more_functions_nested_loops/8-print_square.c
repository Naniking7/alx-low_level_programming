#include "main.h"
/**
 * print_square - prints a square of #
 *@size: size of square
 *
 * Return: void
 */

int print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		for (a = 1 ; a <= size ; a++)
		{
			for (b = 1 ; b <= size ; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
