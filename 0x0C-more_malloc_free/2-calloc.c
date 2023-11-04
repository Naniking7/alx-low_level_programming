#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @mem: memory area to be filled
 * @ccpy: char to copy
 * @timescpy: number of times to copy ccpy
 *
 * Return: pointer to mem
 */

char *_memset(char *mem, char ccpy, unsigned int timescpy)
{
	unsigned int a;

	for (a = 0; a < timescpy; a++)
	{
		mem[a] = ccpy;
	}
	return (mem);
}

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = (nmemb * size);
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
