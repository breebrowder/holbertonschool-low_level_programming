#include "lists.h"

/**
 * pop_listint- delete the head node of a list and return the data
 * @head: double pointer to head of list
 *
 * Return: head nodes data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	if (*head == NULL)
		return (0); /* condition */

	if (head) /* if head exists */
	{
		h = *head;
		n = h->n;
		*head = h->next;
		free(h);
	}
	return (n);
}
