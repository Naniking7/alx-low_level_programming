#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */ 

int main(void)
{
	long long int a = 1, b = 2, temp;
	int count = 2; // Start with 1 and 2

	printf("%lld, %lld", a, b);
	while (count < 50)
	{
		temp = a + b;
		a = b;
		b = temp;

		printf(", %lld", b);
		count++;
	}
	printf("\n");
	return 0;
}
