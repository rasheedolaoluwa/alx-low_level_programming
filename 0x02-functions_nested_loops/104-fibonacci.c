#include <stdio.h>

/**
 * main - Entry point, computes and prints the first 98
 *        Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int a1 = 1, a2 = 0, b1 = 2, b2 = 0;
    unsigned long int carry = 0;
    int count;

    printf("%lu, %lu", a1, b1);
    for (count = 3; count <= 98; count++)
    {
        /* Calculate sum */
        a1 = a1 + b1 + carry;
        if (a1 > 999999999)
        {
            carry = 1;
            a1 = a1 % 1000000000;
        }
        else
        {
            carry = 0;
        }

        a2 = a2 + b2 + carry;
        if (a2 > 999999999)
        {
            carry = 1;
            a2 = a2 % 1000000000;
        }
        else
        {
            carry = 0;
        }

        /* Print sum */
        if (a2 == 0)
        {
            printf(", %lu", a1);
        }
        else
        {
            printf(", %lu%lu", a2, a1);
        }

        /* Swap */
        b1 = a1;
        b2 = a2;
        a1 = 0;
        a2 = 0;
    }
    printf("\n");

    return (0);
}
