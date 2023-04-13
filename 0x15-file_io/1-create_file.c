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
	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	while (*text_content != '\0')
	{
		len++;
		text_content++;
	}
	if (text_content != NULL)
	{
		w = write(STDOUT_FILENO, text_content, len);
		if (w == -1 || w != len)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		w = write(STDOUT_FILENO, "", 0);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
