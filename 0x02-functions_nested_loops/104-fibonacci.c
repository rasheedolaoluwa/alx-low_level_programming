#include <stdio.h>

void print_fibonacci(int b1, int b2);

/**
 * main - Entry point, computes and prints the first 98
 *        Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a1 = 1, a2 = 0, b1 = 2, b2 = 0;  /* Initial Fibonacci numbers */
    int i;

    printf("1, 2");
    for (i = 3; i <= 98; i++)
    {
        /* Compute next Fibonacci number */
        a2 += b2;
        b2 = a2 / 1000000000;  /* Carry */
        a2 %= 1000000000;

        a1 += b1 + b2;
        b1 = a1 / 1000000000;  /* Carry */
        a1 %= 1000000000;

        print_fibonacci(b1, b2);

        b2 = a2;  /* Update b2 for next iteration */
    }
    printf("\n");
    return (0);
}

/**
 * print_fibonacci - Prints a Fibonacci number given by two integer chunks.
 * @b1: The first chunk of the number.
 * @b2: The second chunk of the number.
 */
void print_fibonacci(int b1, int b2)
{
    if (b1 == 0)
        printf(", %d", b2);
    else
        printf(", %d%d", b1, b2);
}
