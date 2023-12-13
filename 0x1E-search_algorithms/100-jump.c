#include "search_algos.h"
/**
 * jump_search - program to search in array using jump search
 * @array: a pointer to the array of list
 * @size: size of the array of the list
 * @value: value to search for
 *
 * Return: array at index at success or -1 at failure
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i, new_s;

	if (array == NULL || size == 0)
		return (-1);
	for (i = prev; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		i = prev;
		prev += step;
	}
	if (i < size)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i, prev);
	}
	else
	{
		new_s = size - 1;
		printf("Value found between indexes [%ld] and [%ld]\n", new_s, new_s + step);
	}
	prev = prev > size - 1 ? size - 1 : prev;
	for (; i < prev && array[i] < value; i++)
	{
		if (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	if (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (array[i] == value ? (int)i : -1);
}
