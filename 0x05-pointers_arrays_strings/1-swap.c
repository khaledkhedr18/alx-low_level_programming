#include <stdio.h>
#include "main.h"

/**
* swap_int - a funcition that swaps the values of two integers.
* @a: integer 1
* @b: integer 2
* Return: void
*/

void swap_int(int *a, int *b)
{
int temporary_var = *a;

*a = *b;
*b = temporary_var;

}
