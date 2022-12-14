#include "main.h"

/**
 * _strchr - string character
 * @s: string given
 * @c: another character
 * Return: a string
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)

		return (s + a);
	}
	return ('\0');
}
