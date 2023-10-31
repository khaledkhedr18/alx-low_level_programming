#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* create_array - a function that creates an array of chars
* Return: char
* @size: the size of the arrray
* @c: the specific char that we are going to initialize our array with.
*/

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
