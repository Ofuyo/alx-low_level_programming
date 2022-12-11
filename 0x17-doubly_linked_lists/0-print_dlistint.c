#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlist
 * @h: doubly linked list
 *
 * Return: printed elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
