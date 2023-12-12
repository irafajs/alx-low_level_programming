#include "search_algos.h"

/**
 * linear_search - function to search using linear search
 * @array: pointer to the list of array
 * @size: represent the length of the array
 * @value: represent the value to serach for
 *
 * Return: value if success -1 at failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t ctr;

	if (array == NULL)
	{
		return (-1);
	}
	for (ctr = 0; ctr < size; ctr++)
	{
		printf("Value checked array[%ld] = [%d]\n", ctr, array[ctr]);
		if (array[ctr] == value)
		{
			return (value);
		}
	}
	return (-1);
}
