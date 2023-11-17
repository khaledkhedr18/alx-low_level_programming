#include "lists.h"

/**
* free_list - a function that adds a node to the head of the current node.
* Return: void
* @head: the head of the node
*/

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
