#include "function_pointers.h"

/**
 * array_iterator - output the array pointed to by a function pointer
 * @array: passed array
 * @size: passed unsigned int
 * @action: passed fucntion pointer
 *
 * Return : nothing at success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
