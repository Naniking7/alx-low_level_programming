#include "main.h"
/**
 *reverse_array - revereses an array
 *@a: pointer to the array
 *@n: elements of the array
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int snp, cnt;

	n = n - 1;
	cnt = 0;
	while (cnt <= n)
	{
		snp = a[cnt];
		a[cnt++] = a[n];
		a[n--] = snp;
	}
}
