#include "lists.h"

/**
 * add_nodeint_end- function adds a new node at the begininng of the list
 * @head: double pointer to head
 * @n: new node
 * Return: address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c;
	listint_t *newelement;

	newelement = (listint_t *)(malloc(sizeof(listint_t)));
	if (newelement == NULL)
		return (NULL); /* condition: failure case */

	newelement->n = n;
	newelement->next = NULL;

	if (*head == NULL)
		*head = newelement;

	else
	{
		c = *head;
		while (c->next != NULL)

			c = c->next;
			c->next = newelement;
	}
	return (newelement);
}
