#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list.
 * @n: The integer for the new node to be added.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: the address of the new element. otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
