#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always (0)
 *
 */

int main(void)
{
	int c;

	for (c = 48; c < 57; c++)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
