#include <stdio.h>
#include "main.h"
#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9, and '\n'
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (!(i == 50) && !(i == 52))
		{
			putchar(i);
		}
	}
	putchar('\n');
}
