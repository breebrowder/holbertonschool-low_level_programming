#include "lists.h"

/**
 * get_nodeint_at_index- function that returns the nth node of a linked list
 * @head: pointer to head
 * @index: index of linked list
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;
	unsigned int counter = 0; /* keeps count */

	for (; counter < index; counter++)
	{
		if (h)
			h = h->next;
		else
			return (NULL);
	}
	if (h) /* if it exists */
		return (h);
	else
		return ('\0');
}
