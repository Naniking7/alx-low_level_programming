#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value in the range of integers
 * @max: maximum value in the range of integers
 *
 * Return: a  pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int arrsize, ind;

	if (min > max)
	{
		return (NULL);
	}
	arrsize = max - min + 1;
	arr = malloc(sizeof(int) * arrsize);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (ind = 0; min <= max; ind++)
	{
		arr[ind] = min++;
	}
	return (arr);
}
