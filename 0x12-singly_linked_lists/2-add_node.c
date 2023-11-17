#include "lists.h"

/**
* add_node - a function that adds a node to the head of the current node.
* Return: a node
* @head: the head of the node
* @str: the text of the current node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
