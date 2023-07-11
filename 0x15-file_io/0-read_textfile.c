#include "main.h"

/**
 * read_textfile - read the file and write out its content
 * @filename: passed args as a pointer to the file path
 * @letters: passed args as a counter of the letter written
 *
 * Return: 0 when error occured, read at success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char r_store[1024];
	ssize_t read_c;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	read_c = read(fd, r_store, letters);
	if (read_c == -1)
	{
		close(fd);
		return (0);
	}
	if (read_c != write(STDOUT_FILENO, r_store, read_c))
	{
		close(fd);
		return (0);
	}
	if (close(fd) == -1)
	{
		return (0);
	}
	return (read_c);
}
