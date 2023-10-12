#include <unistd.h>
/**
 * main - Entry point
 *_putchar - To print singular characters
 *char c: Assign character
 *Return: Always (0) or successful with 1
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

