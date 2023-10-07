#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the last digit of a random number
 * and determines whether it is greater than 5, 0 or less  than 6
 *
 * Return: 0 on  success
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	p = n % 10;
	if (p > 5)
		printf("Last digit of %d is %d and is greater than 5", n, p);
	else if (p == 0)
		printf("Last digit of %d is %d and is 0", n, p);
	else if (p < 6 && p != 0)
		printf("Last digit of %d is %d and is less than 6", n, p);
	printf("\n");
	return (0);
}
