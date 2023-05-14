#include "main.h"

/**
 * append_text_to_file - append to the file the content
 * @filename: passed arg as a pointer to the filepath
 * @text_content: passed arg as a pointer to a text to append
 *
 * Return: 1 when successfull and -1 when error is returned
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fao, faw;
	size_t c_count = 0;

	fao = open(filename, O_WRONLY | O_APPEND);
	if (fao == 0)
	{
		return (-1);
	}
	while (text_content[c_count] != '\0')
	{
		c_count++;
	}
	faw = write(fao, text_content, c_count);
	if (faw == 0)
	{
		return (-1);
	}
	if (text_content == NULL && fao != 0)
	{
		return (1);
	}
	else
		return (-1);
}
