#include <stdio.h>
#include "main.h"

/**
* get_bit - a function that returns the value of a bit at a given index
* Return: 0 or -1.
* @n: the number
* @index: the index starting from 0 of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;
	int bit_value = (n & mask) != 0 ? 1 : 0;

	return (bit_value);
}
