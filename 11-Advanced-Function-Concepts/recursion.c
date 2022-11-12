#include <stdio.h>

/**
 * - this challenge will test your understanding of recursion and specifically recursive functions
 *
 * Challenge #1
 * - write a program which will calculate the sum of numbers from 1 to n using recursion
*/

static int sum_one_to_n(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum_one_to_n(n - 1);
}

/**
 * Challenge #2
 * - write a program which will find the GCD (greatest common denominator) fo two numbers using recursion
*/

static int gcd(int a, int b) {
    if (a < b) {
        int c = a;
        a = b;
        b = c;
    }

    int r = a % b;
    if (r == 0) {
        return b;
    }
    return gcd(b, r);
}

int main_recursion() {
    printf("\nRecursion - Sum of Numbers from 1 to N:\n");

    int n;
    printf("Input the last number of the range starting from 1: ");
    scanf("%d", &n);
    printf("The sum of numbers from 1 to %d = %d\n", n, sum_one_to_n(n));

    printf("\nRecursion - GCD:\n");
    int a, b;
    printf("Input 1st number: ");
    scanf("%d", &a);
    printf("Input 2nd number: ");
    scanf("%d", &b);
    printf("The GCD of %d and %d is: %d\n", a, b, gcd(a, b));

    return 0;
}