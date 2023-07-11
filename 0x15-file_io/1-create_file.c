#include "main.h"

/**
 * create_file - create a file if no exist, write or truncate if it exist
 * @filename: passed args as pointer to the filename
 * @text_content: passed param as text to be written
 *
 * Return: -1 when it fails and 1 at success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_res;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		w_res = write(fd, text_content, strlen(text_content));
		if (w_res == -1)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
