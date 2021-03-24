#include "lists.h"

/**
 * free_listint2- free a list
 * @head: double pointer to head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{

	listint_t *freelist;

	if (head == NULL)
		return; /* condition: true */

	while (*head != NULL)
	{
		freelist = *head;
		*head = freelist->next;
		free(freelist);
	}
	*head = NULL;
}
