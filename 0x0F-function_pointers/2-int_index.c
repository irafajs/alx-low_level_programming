/**
 * int_index - output the array according to a func pointed at
 * @array: passed array to be examined
 * @size: passed size as array len
 * @cmp: function pointer to a function
 *
 * Return: none 0 at success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (!array || !cmp)
	{
		return(0);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return(a);
		}
	}
	return(1);
}
