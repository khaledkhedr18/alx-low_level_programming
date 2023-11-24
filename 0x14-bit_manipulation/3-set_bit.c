#include "main.h"
#include <stdio.h>

/**
* set_bit - a function that sets bits
* Return: 1
* @n: a pointer
* @index: the index of the number entered
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

*n |= mask;

return (1);
}
