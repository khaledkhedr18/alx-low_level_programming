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
    return (n >> index) & 1;
}
