#include "main.h"

/**
 * print_alphabet_x10 - Entry point to print xN time complete alphabet
 *
 */

void print_alphabet_x10(void)
{
	int rep = 0;

	do {
		char alpha = 'a';

		do {
			_putchar(alpha);
			alpha++;
		} while (alpha <= 'z');
		_putchar('\n');
		rep++;
	} while (rep <= 9);

}
