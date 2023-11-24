#include "main.h"

/**
 * clear_bit - a function that clears a bit
 * Return: 1 if it worked, or -1 if an error occurred
 * @n: a pointer to the number
 * @index: the index of the bit to clear
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

mask = ~mask;
*n &= mask;

return (1);
}
