#include "main.h"

/**
 * close_f- closes file and checks for errors
 * @f: file descriptor
 * Return: nothing
 */

void close_f(int f)
{
	int j = close(f);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
/**
 * main- starting point of program
 * @argc: number of arguments
 * @argv: array of character pointers
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int file_to, file_from;
	char *buffer = malloc(sizeof(char) * 1024);
	ssize_t i, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	file_from = open(argv[1], O_RDONLY);
	while ((i = read(file_from, buffer, 1024)) != -1)
	{
		w = write(file_to, buffer, i);
		if (w == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}
	if (i == -1 || file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	free(buffer);
	close_f(file_from);
	close_f(file_to);
	return (0);
}
