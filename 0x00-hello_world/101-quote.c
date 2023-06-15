#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char m[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    	write(STDERR_FILENO, m, sizeof(m) - 1);
	return (1);
}
