#include "main.h"
/**
 * is_prime - function that detects if,
 * an input number is a prime number.
 * @n: number.
 * @c: iterator.
 * Return: 1 if n is a prime numberelse 0 .
 */

int is_prime(unsigned int n, unsigned int c)
{
if (n % c == 0)
{
if (n == c)
return (1);
else
return (0);
}
return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - function that detects if,
 * an input number is a prime number.
 * @n: number.
 * Return: 1 if n is a prime number else 0 .
 */

int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (0);
if (n == 1)
return (0);
return (is_prime(n, 2));
}
