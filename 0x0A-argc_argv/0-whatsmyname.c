#include <stdio.h>

/**
 *main -  prints this program's name
 *@argc: number of arguments
 *@argv: array that stores the actual arguments
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
