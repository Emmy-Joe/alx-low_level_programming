#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of a listint_t linked list.
 * @index: The index of the node to locate - indices start at 0.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the node does not exist - NULL. Else, the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
