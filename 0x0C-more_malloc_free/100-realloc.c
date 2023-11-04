#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated 
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newmem;
	char *prvptr;
	unsigned int ind;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	newmem = malloc(new_size);
	if (!newmem)
	{
		return (NULL);
	}
	prvptr = ptr;

	if (new_size < old_size)
	{
		for (ind = 0; ind < new_size; ind++)
			newmem[ind] = prvptr[ind];
	}
	if (new_size > old_size)
	{
		for (ind = 0; ind < old_size; ind++)
		newmem[ind] = prvptr[ind];
	}
	free(ptr);
	return (newmem);
}
