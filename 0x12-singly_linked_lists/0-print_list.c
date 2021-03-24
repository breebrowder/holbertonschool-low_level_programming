#include "lists.h"

/**
 * print_list- prints all elements of a list
 * @h: head
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n; /* number of nodes */

	for (n = 0; h != NULL; n++)
	{
		if (h->str != '\0')
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}
	return (n);
}
