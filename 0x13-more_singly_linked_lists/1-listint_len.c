#include "lists.h"

/**
 * listint_len- find number of elements in a linked list
 * @h: head
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *head;
	size_t i; /* keep count of number of elements */

	head = h;
	for (i = 0; head != NULL; i++)
	{
		head = head->next;
	}
	return (i);
}
