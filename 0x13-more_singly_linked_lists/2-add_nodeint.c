#include "lists.h"

/**
 * add_nodeint- function that adds a new node at the beginning of a list
 * @head: pointer to head
 * @n: new node
 *
 * Return: address of new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *newelement;

	h = *head;
	newelement = malloc(sizeof(listint_t));
	if (newelement == NULL)
		return (NULL); /* condition: failure case */

	newelement->n = n;
	*head = newelement;
	{

		if (h == NULL)
			newelement->next = NULL;
		else
			newelement->next = h;
	}
	return (newelement);
}
