#include "main.h"

/**
 * create_file - create a file and write into it
 * @filename: passed arg as a pointer to the file
 * @text_content: passed arg as a count of written char in the file
 *
 * Return: 1 when successful and -1 when error
 */
int create_file(const char *filename, char *text_content)
{
	int fwp;
	ssize_t c_andika;
	size_t counter;

	fwp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fwp == 0)
	{
		return (-1);
	}
	while (text_content[counter] != '\0')
	{
		if (text_content == NULL)
		{
			continue;
		}
		++counter;
	}
	c_andika = write(fwp, text_content, counter);
	if (c_andika == 0)
	{
		return (-1);
	}
	close(fwp);
	return (1);
}


