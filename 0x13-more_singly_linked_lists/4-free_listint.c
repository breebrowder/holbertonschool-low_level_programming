#include "lists.h"

/**
 * free_listint- function that frees a list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *h;

	h = head;
	while (!head)
	{
		head = head->next;
		free(h);
	}
}
