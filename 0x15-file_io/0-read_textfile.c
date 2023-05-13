#include "main.h"

/**
 * read_textfile - read the file content and write it out to stdout
 * @filename: passed pointer to hold the file
 * @letters: passed args as letters to be wrote out
 *
 * Return: the number of char counted
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int frp;
	char bika[B_SIZE];
	size_t c_count;

	frp = open(filename, O_RDONLY);
	if (frp == -1)
	{
		return (-1);
	}
	for (c_count = 0; c_count < letters; c_count++)
	while ((read(frp, bika, B_SIZE)))
	{
		printf("%s", bika);
		if (read(frp, bika, B_SIZE))
		{
			exit(1);
		}
	}
	if (close(frp) == -1)
	{
		return (-1);
	}
	return (c_count);
}
