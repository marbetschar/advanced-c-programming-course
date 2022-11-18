/**
 * this challenge will test your understanding of
 * - how to declare a function pointer
 * - how to assign functions to a function pointer
 * - how to pass a function pointer as parameter
 * - how to invoke a function using its pointer
*/
#include <stdio.h>

int array1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int array2[] = { 38, 27, 87, 63, 59, 223, 132, 1, 19, 7 };

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

typedef int (*operation_t)(int a, int b);

operation_t operations[] = {
    &add,
    &subtract,
    &multiply,
    &divide
};

void display(operation_t func, int size) {
    printf("Result = ");
    for(int i = 0; i < size; i++) {
        printf("%d\t", (*func)(array1[i], array2[i]));
    }
    printf("\n");
}

int main_function_pointers() {
    printf("\nFunction Pointers:\n");

    int choice;
    do {
        printf("Which operation do you want to perform?\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("0. None ...\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice > 0) {
            if (choice < 5) {
                display(operations[choice - 1], 10);
            } else {
                printf("Unknown choice. Nothing to do.\n");
            }
        }

    } while (choice != 0);

    return 0;
}