#include "function_pointers.h"

/**
 * print_name - fonction that dynamically executes the fonction pointed by f
 * @name: pointer to name string
 * @f: pointer to the fonction to be executed
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
