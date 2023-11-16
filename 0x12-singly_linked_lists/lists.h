#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct list_t *nodePtr;

typedef struct list_t 
{
	char *str;
	unsigned int len;
	nodePtr next;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif