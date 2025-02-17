#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: ALways 0
 */
int main(void)
{
	char num;
	char alpha;

	for (num = 0 ; num < 10 ; num++)
		putchar('0' + num);

	for (alpha = 'a' ; alpha <= 'f' ; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
