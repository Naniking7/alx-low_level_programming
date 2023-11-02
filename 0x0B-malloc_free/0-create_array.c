#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *create_array - creates an array of characters and initializes it with a
 *specific character
 *@size: size of the array
 *@c: character to initialize array with
 *
 *Return: pointer to the array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
	return (array);

}
