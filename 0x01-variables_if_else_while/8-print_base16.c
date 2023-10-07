#include <stdio.h>

/**
 * main - Prints all base 16 numbers in lowercase
 *
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
