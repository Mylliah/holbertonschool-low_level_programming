#include "main.h"

/**
 * puts_half - function to print half of string
 * @str: string
 *
 */

void puts_half(char *str)
{
	int len = 0;
	int index; /* where index start */

	while (str[len] != '\0')
		len++;

	/* to determinate where strat the second half */
	if (len % 2 == 0) /* if even */
		index = len / 2;
	else              /* if odd */
		index = (len + 1) / 2;

	for (len = index ; str[len] != '\0' ; len++)
		_putchar(str[len]);

	_putchar('\n');
}
