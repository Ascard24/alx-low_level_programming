#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9, followed by a new line.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
