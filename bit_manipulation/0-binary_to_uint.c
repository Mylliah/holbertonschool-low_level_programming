#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary string into unsigned int
 * @b: string contains '0' and '1'
 *
 * Return: converted number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result << 1 | (b[i] - '0');
		i++;
	}

	return (result);
}
