#include "main.h"

int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */

int _sqrt_recursion(int n)
{
	return find_sqrt(n, 1);
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	return (guess);

	if (guess * guess > n)
	return (-1);

	return (find_sqrt(n, guess + 1));
}
