#include "main.h"

/**
 * is_prime_helper - helps to determine if a number is prime
 *
 * @n: number to be checked
 * @guess: number to divide n by
 *
 * Return: 1 if n is divisible by guess, 0 otherwise
 */

int is_prime_helper(int n, int guess)
{
	if (guess * guess > n)
		return (1);
	if (n % guess == 0)
		return (0);
	return (is_prime_helper(n, guess + 1));
}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}
