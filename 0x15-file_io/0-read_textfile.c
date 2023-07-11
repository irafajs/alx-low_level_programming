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
	char fd;
	char r_store[1024];
	ssize_t read_c;

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	read_c = read(fd, r_store, letters);
	if (read_c == -1)
	{
		close(fd);
		return (0);
	}
	dprintf(1, "%.*s\n", (int)read_c, r_store);
	close(fd);
	return (read_c);
}
