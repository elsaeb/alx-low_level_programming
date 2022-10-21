#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function prints the size of list
 * @head: head of linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *head)
{
	unsigned int nodes = 0;


	while (head)
	{
		nodes++;
		head = head->next;
	}
	return (nodes);
}
