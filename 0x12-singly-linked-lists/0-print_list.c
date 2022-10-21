#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints a linked list 
 * @head: pointer to head of list
 * Return: number of nodes in list_t
 */

size_t print_list(const list_t *head)
{
	unsigned int nodes = 0;

	while (head)
	{
		printf("[%u] ", head->len);
		if (head->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", head->str);

		head = head->next;
		nodes++;
	}
	return (nodes);
}
