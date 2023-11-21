#include "hash_tables.h"
/**
 * hash_table_set - add an element to a hash table
 * @ht: hash table
 * @key: hash key
 * @value: value associated with key
 *
 * Return: On success: 1
 * On failure: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	char *value_copy;
	hash_node_t *current, *new_node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	value_copy = strdup(value);

	if (current && strcmp(key, current->key) == 0)
	{
		free(current->value);
		current->value = value_copy;
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
