#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of the buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a, c, h;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (h = a; h < a + 10; h++)
			{
				if (h % 2 == 0)
					printf(" ");
				if (h < size)
					printf("%.2x", *(b + h));
				else
					printf("  ");
			}
			printf(" ");
			for (c = a; c < a + 10; c++)
			{
				if (c >= size)
					break;
				if (*(b + c) < 32 || *(b + c) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + c));
			}
			printf("\n");
		}
	}
}
