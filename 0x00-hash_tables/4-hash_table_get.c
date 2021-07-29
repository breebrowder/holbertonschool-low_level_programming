#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get- function that retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: the key
 * Return: value associated with element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *e = NULL;

	/* e is our element */

	if (ht == NULL || key == NULL)
		return (NULL); /* condition */

	if (e == NULL)
		return (NULL); /* condition */

	index = 0;

	index = key_index((unsigned char *) key, ht->size);
	e = ht->array[index];

	while (strcmp(key, e->key) != 0)
		e = e->next;

	return (e->value); /* return value assoc with element */
}
