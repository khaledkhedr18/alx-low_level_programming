#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - a function that prints a name as is.
* @name: the name of the character
* @f: the pointer to the function of the name.
*/


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	name = "";
	f(name);
}
