#include "main.h"
#include <stdio.h>

/**
* _isalpha - Entry point
* Description: This function checks for alphabetic character
* @c: Character that represents lowercase, letter or uppercase
* Return: 1-if letter, 0-otherwise
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
	return (1);
}
	else
{

return (0);

}
}