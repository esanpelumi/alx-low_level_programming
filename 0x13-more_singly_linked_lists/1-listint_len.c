#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *b)
{
	size_t number = 0;
	
	while (b)
	{
		number++;
		b = b->next;
	}
	return (number);
}

