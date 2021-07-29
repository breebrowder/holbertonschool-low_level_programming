#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set- function that adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: the key
 * @value: value associated with key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int index;
        hash_node_t *e = NULL, *newNode = NULL;

        /* e is our element */

        if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
                return (0); /* condition */

        if (e == NULL)
                return (0); /* condition */

        index = 0;

        index = key_index((unsigned char *) key, ht->size);
        e = ht->array[index];

        if (e && strcmp(key, e->key) == 0)
	{
		free(e->value);
		e->value = strdup(value);
                return (1);
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
        return (1);
}
