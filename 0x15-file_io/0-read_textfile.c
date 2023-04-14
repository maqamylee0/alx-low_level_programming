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
	ssize_t i, w;
	int r = 0;

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
	i = read(fd, buffer, letters);
	if (i == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, i);
	if (w == -1 || w != i)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
