#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - A program that descripes how to print n variables
 *
 * Return: Always (0) succes
 */


/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("What is the Number:");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("It's positive");
	}
	else if (n < 0)
	{
		printf("It's negative");
	}
	else if (n == 0)
	{
		printf("It's zero");
	}
	return (0);
}
