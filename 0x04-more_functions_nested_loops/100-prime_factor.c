#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int num = 612852475143;
    unsigned long int max_prime = -1;
    unsigned long int i;
    unsigned long int limit;

    // Find the square root of num manually
    for (limit = 0; limit * limit < num; ++limit)
        ;
    --limit;

    // Dividing the number by 2 until it becomes odd
    while (num % 2 == 0)
    {
        max_prime = 2;
        num >>= 1;  // equivalent to num /= 2
    }

    // num must be odd at this point, so we can skip an element (Note i = i +2)
    for (i = 3; i <= limit; i += 2)
    {
        // While i divides num, keep dividing and update max_prime
        while (num % i == 0)
        {
            max_prime = i;
            num = num / i;
        }
    }

    // This condition is to handle the case when num is a prime number
    // greater than 2
    if (num > 2)
        max_prime = num;

    printf("%lu\n", max_prime);

    return (0);
}
