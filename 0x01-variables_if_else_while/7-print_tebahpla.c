#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: 0 when succesful
 */

int main(void)
{
	char cn;

	for (cn = 'z'; cn >= 'a'; cn--)
	{
		putchar(cn);
	}
	putchar('\n');
	return (0);
}
