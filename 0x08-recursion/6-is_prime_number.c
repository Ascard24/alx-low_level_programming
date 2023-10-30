 #include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - Checks if an input integer is a prime number.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is prime, 0 if n is not prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	if (n <= 3)
	return (1);

	return (is_prime_helper(n, 2));
}


/**
 * is_prime_helper - Helper function to check for primality recursively.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 if n is not prime.
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	return (1);

	if (n % divisor == 0)
	return (0);

	return (is_prime_helper(n, divisor + 1));
}
