#include "main.h"

/**
 * append_text_to_file - append text to the existing file
 * @filename: passed arg as a pointer to the filename
 * @text_content: passed arg as text to append
 *
 * Return: 1 at success, -1 when failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_res;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
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

