#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer to a string to be duplicated
 * Return: NULL if str is NULL
 * pointer to a duplicated string on success
 * NULL if memory was insufficient
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;
	/*check if str is null */
	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(sizeof(char) * (len + 1));

	/*check of malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
