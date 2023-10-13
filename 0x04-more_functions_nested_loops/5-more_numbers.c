#include "main.h"
/**
 * more_numbers - prinys 0 to 14 x10
 *
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 15 ; b++);
			_putchar(b / 10 + '0');
			_putchar(b % 10 +'0');
	}
	_putchar('\n');
}
