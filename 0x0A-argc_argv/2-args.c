#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: actual arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int ind;

	for (ind = 0; ind < argc; ind++)
		printf("%s\n", argv[ind]);
	return (0);
}
