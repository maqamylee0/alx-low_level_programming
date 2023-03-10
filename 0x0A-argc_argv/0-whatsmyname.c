#include "main.h"

/**
 * main - prints name of file
 * Return: integer
 */

int main(int argc, char *argv)
{
	int i = 0;

	while ( argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	return (0);
}

