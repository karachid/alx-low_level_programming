#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void (NOTHING)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *t;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		t = ht->array[i];
		while (t != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", t->key, t->value);
			flag = 1;
			t = t->next;
		}
	}
	printf("}\n");
}
