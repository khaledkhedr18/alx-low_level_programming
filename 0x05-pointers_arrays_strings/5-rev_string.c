#include <stdio.h>
#include "main.h"

/**
* rev_string - a function that prints string
* @s: a string placeholder
* Return: void
*/

void rev_string(char *s)
{

	int i;
	int length = 0;


	if (s != NULL)
	{
		while (s[length] != '\0')
		{
			length++;
		}
		for (i = 0; i < length / 2; i++)
		{
			char temp = s[i];
			s[i] = s[length - i -1];
			s[length - i - 1] = temp;
		}
	}
}
