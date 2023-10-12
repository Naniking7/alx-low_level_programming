#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int gan1 = 1;
	unsigned long int gan2 = 2;
	unsigned long int gan3;
	int n;

	printf("%lu, ", gan1);
	for (n = 1 ; n < 50 ; n++);
	{
		printf("%lu", gan2);
		gan3 = gan1 + gan2;
		gan2 = gan3;
		if  (n != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
