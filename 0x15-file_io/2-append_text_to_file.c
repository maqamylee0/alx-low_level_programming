#include "main.h"

/**
 * append_text_to_file- appends text
 * @filename: pointer to file
 * @text_content: stringto write
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	ssize_t w;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	while (*text_content != '\0')
	{
		len++;
		text_content++;
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		w = write(STDOUT_FILENO, text_content, len);
		if (w == -1 || w != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
