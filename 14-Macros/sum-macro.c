#include <stdio.h>

#define SUM(a, b) a + b

int main_sum_macro() {
    printf("\nSum Macro:\n");
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Sum of both numbers = %d\n", SUM(a, b));
}