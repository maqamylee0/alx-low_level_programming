#include "main.h"

/**
 * create_file- create a file
 * @filename: name of file
 * @text_content: content to write to text
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		w = write(fd, text_content, len);
		if (w == -1 || w != len)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		w = write(fd, "", 0);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
