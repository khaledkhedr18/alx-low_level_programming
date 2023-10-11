#include "main.h"
#include <stdio.h>
/**
* _abs - Entry point
* Description: A function that computes the absolute value of an integer
* Return: 0
*/

int _abs(int c)
{
if (c < 0)
	{
	int abs_val;
	abs_val = c * -1;
	return (abs_val);
	}

	return (c);

}
