#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes function given
 * @array: array of elements
 * @size: size of array
 * @action: function of pointer
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
