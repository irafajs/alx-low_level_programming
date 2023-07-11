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
	char *buffer[1024];

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	w_res = write(fd, buffer, sizeof(text_content));
	if (w_res == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
