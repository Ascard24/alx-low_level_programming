#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: This program prints the string "_putchar"
 * character by character.
 * Return: Always 0 (indicating success)
 */

int main(void)
{

	char str[] = "_putchar";
	int i = 0;


	while (str[i] != '\0')
	{
		char c = str[i];

		printf("%c", c);
		i++;
	}

	printf("\n");

	return (0);
}
