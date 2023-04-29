#ifndef ELF_H_
#define ELF_H_

#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _strncmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the max number of bytes to compare
 *
 * Return: 0 if the first n bytes of s1 and s2 are equal, otherwise non-zero
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	for ( ; n && *s1 && *s2; --n, ++s1, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (n)
	{
		if (*s1)
			return (1);
		if (*s2)
			return (-1);
	}
	return (0);
}
/**
 * _close - close a file descriptor and print an error message upon failure
 * @fd: the file descriptor to close
 */
void _close(int fd)
{
	if (close(fd) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close fd\n", 22);
	exit(98);
}
/**
 * _read - read from a file and print an error message upon failure
 * @fd: the file descriptor to read from
 * @buf: the buffer to write to
 * @count: the number of bytes to read
 */
void _read(int fd, char *buf, size_t count)
{
	if (read(fd, buf, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(fd);
	exit(98);
}
/**
 * magic - print ELF magic
 * @buffer: the ELF header
 */
void magic(const unsigned char *buffer)
{
	unsigned int i;

	if (_strncmp((const char *) buffer, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 16; ++i)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}
/**
 * abivers - print ELF ABI version
 * @buffer: the ELF header
 */
void abivers(const unsigned char *buffer)
{
	printf("  %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}
/**
 * type - print ELF type
 * @buffer: the ELF header
 * @big_endian: endianness (big endian if non-zero)
 */
void type(const unsigned char *buffer, int big_endian)
{
	char *type_table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};
	unsigned int type;

	printf("  %-34s ", "Type:");

	if (big_endian)
		type = 0x100 * buffer[16] + buffer[17];
	else
		type = 0x100 * buffer[17] + buffer[16];

	if (type < 5)
		printf("%s\n", type_table[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}
#endif
