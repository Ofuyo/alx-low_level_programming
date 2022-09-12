#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * return: (0)
 *
 */

int main(void)
{
	int c

		for (c = 48; c <= 57; c++)
		{
			putchar(c);
			if (c != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
