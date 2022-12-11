#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlist
 * @h: doubly linked list
 *
 * Return: printed elements in the list
 */

void print_dlistint(const dlistint_t *h)
{
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
