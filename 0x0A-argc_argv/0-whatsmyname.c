#include <stdio.h>
#include "main.h"

/**
 * main - a function to print its name
 * @argc: argc parameter
 * @argv: array of command listed
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
