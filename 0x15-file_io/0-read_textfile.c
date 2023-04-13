#include "main.h"
/**
 * read_textfile- read file contents
 * @filename: pointer to file
 * @letters: size of letter sto print
 * Return:number of letter  to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * (letters + 1));
	int fd;
	size_t i;
	int read = 0;

	if (!buffer)
		return (0);
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	while ((i = read(fd, buffer, letters)) > 0)
	{
		write(STDOUT_FILENO, buffer, i);
		read =+ i;
	}
	free(buffer);
	close(fd);
	return (read);
}
