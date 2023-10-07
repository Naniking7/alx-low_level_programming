#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints lowercase alphabet except q and e.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
