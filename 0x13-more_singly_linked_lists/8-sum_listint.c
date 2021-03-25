#include "lists.h"

/**
 * sum_listint- function returns the sum of all the data (n) in linked list
 * @head: pointer to head
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int n;
	listint_t *h;

	n = 0; /* n is the sum */
	h = head;

	for (; h != '\0'; h = h->next)
	{
		n += h->n;
	}
	return (n);
}
