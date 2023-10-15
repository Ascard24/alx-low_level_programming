#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet[24];
	int i = 0;
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			alphabet[i] = letter;
			i++;
		}
		letter++;
	}

	alphabet[i] = '\0';
	i = 0;
	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
