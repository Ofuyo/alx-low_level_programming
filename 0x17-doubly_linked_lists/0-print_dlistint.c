#include <stdio.h>

/**
 * main - function that prints all the elements
 *@h: header to the pointer
 *@n: end of the list
 * Return: printed elements
 */


void print_dlistint(const dlistint_t *h)
{
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
