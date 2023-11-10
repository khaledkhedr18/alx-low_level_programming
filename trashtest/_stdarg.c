#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void printnumbers(int num_args, ...)
{
	va_list args;
	va_start(args, num_args);

	
}

int main()
{
	printnumbers(5, 3, 6 , 8);
	return (0);
}