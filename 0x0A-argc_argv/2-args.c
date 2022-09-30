#include <stdio.h>
#include "main.h"

/**
 * main - funtion to print name
 * @argc: argc parameter
 * @argv: an array
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
