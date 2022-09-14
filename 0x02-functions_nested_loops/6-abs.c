#include "main.h"
/**
 * _abs - absolute value function
 * @c:  is the int argument for the function
 * Return: (0)
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
