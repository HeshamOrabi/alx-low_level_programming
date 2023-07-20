#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Applies a function to a name string
 * @name: pointer to a character array containing the name
 * @f: pointer to a function that takes a pointer to a character array
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

