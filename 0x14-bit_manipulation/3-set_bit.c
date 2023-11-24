#include "main.h"

/**
* set_bit - a function that sets bits
* Return: 1
* @n: a pointer
* @index: the index of the number entered
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

unsigned long int mask = 1 << index;
*n |= mask;

return (1);
}
