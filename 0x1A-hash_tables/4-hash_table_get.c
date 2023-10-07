#include "hash_tables.c"

/**
 * hash_table_get - getsa value associated with a given key
 * @ht: hash table
 * @key: input key
 * Return: value associated with key, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[i];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
