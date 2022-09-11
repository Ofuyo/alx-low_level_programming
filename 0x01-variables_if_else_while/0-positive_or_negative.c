#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - prints a random number and states wether it is positve, negative, or 	zero
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand(0) RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		print("%d is negative\n", n);
	else 
		print("%d is zero\n", n);
	return (0)
}
