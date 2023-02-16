#include <unistd.h>
/**
 * main - print text without prinf
 * Return: 1 on sucess
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
