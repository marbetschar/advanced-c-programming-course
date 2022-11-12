#include <stdio.h>
#include <stdarg.h>

/**
 * - this challenge will test your understanding of variadic functions
 * - write a program that creates a variadic function that will allow a
 *   programmer to add any amount of nunmbers (integers) that they would
 *   like to be added together
 * - in order to know how many numbers are being passed to this variadic
 *   function, you can use the first arguments as the number of arguments
 *
 * - invoking the funciton with a variable number of arguments:
 *   addingNumbers(2, 10, 20), addingNumbers(3, 10, 20, 30),
 *   addingNumbers(4, 10, 20, 30, 40)
 *
 *   Output:
 *   30, 60, 100
*/

static int addingNumbers(int n, ...) {
    va_list pvargs;
    int sum = 0;

    va_start(pvargs, n);
    for(int i = 0; i < n; i++) {
        int varg = va_arg(pvargs, int);
        sum += varg;
    }
    va_end(pvargs);

    return sum;
}

int main_variadic_functions() {
    printf("\nVariadic Functions:\n");
    printf("addingNumbers(2, 10, 20) = %d\n", addingNumbers(2, 10, 20));
    printf("addingNumbers(3, 10, 20, 30) = %d\n", addingNumbers(3, 10, 20, 30));
    printf("addingNumbers(4, 10, 20, 30, 40) = %d\n", addingNumbers(4, 10, 20, 30, 40));

    return 0;
}