#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint- print all the elements of a linked list
 * @h: head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i; /* keep count of number of nodes */
	const listint_t *head;

	head = h;
	for (i = 0; head != NULL; i++)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
	return (i);
}
