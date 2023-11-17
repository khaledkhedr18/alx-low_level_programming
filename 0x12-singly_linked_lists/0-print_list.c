#include "lists.h"

/**
* print_list - main function that prints all the elements of the list t
* Return: any type
* @h: element of the type list_t
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		int stringlen = strlen(h->str);
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", stringlen, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
