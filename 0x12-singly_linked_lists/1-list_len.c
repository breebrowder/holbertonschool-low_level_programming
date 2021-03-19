#include "lists.h"

/**
 * list_len-  function that returns the number of elements in a linked list
 * @h: head
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; elements++)
	{
		h = h->next;
	}
	return (elements);
}
