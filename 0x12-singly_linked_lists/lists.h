#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct list_t *nodePtr;

/**
* struct list_t - a structure of a linked list
* @str: a pointer to a string
* @len: an integer that contains the length of the string.
* @next: the tail of the node.
*/
typedef struct list_t
{
	char *str;
	unsigned int len;
	nodePtr next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
