#include "lists.h"

/**
* list_len - a function that returns the number of elements in a linked list
* Return: the number of elements.
* @h: a counter to the linked lists
*/

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
