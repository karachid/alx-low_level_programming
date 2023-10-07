#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	sorted_hash_table_t *ht;

	ht = sorted_hash_table_create(1024);
	sorted_hash_table_set(ht, "y", "0");
	sorted_hash_table_print(ht);
	sorted_hash_table_set(ht, "j", "1");
	sorted_hash_table_print(ht);
	sorted_hash_table_set(ht, "c", "2");
	sorted_hash_table_print(ht);
	sorted_hash_table_set(ht, "b", "3");
	sorted_hash_table_print(ht);
	sorted_hash_table_set(ht, "z", "4");
	sorted_hash_table_print(ht);
	sorted_hash_table_set(ht, "n", "5");
	sorted_hash_table_print(ht);
	sorted_hash_table_set(ht, "a", "6");
	sorted_hash_table_print(ht);
	sorted_hash_table_set(ht, "m", "7");
	sorted_hash_table_print(ht);
	sorted_hash_table_print_rev(ht);
	sorted_hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
