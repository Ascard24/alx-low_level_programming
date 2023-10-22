#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function calculates the sum of multiples of 3 or 5 below 1024 and
 * returns 0 to indicate successful execution.
 *
 * Return: 0 for success.
 */

int main(void)
{
	int limit = 1024;
	int sum = 0;
	int i;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}
