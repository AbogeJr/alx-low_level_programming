#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints the name passed
 * @name: name to be printed
 * @f: callback function for printing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
