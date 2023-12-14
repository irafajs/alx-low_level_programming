#include "search_algos.h"
/**
 * interpolation_search - perform search algorith using interpolation search
 * @array: pointer to the array list
 * @size: length of the list
 * @value: value to search for
 *
 * Return:index where value located or -1 at failuere
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;
	size_t pos, new_p;

	if (array == NULL || size == 0)
		return (-1);
	new_p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
	while (l <= h && value >= array[l] && value <= array[h])
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	printf("Value checked array[%lu] is out of range\n", new_p);
	return (-1);
}
