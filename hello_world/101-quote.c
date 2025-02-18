#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, quote, sizeof(quote) - 1);
	write(2, "\n", 2);
	return (1);
}
