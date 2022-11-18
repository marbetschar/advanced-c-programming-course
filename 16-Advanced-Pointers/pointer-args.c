

#include <stdio.h>
#include <malloc.h>

/**
 * this challenge will test your understanding of double
 * pointers used as arguments to a function
 *
 * - write a program that includes a function that modifies a pointers value
 *   - not the value that the pointer is pointing to
 *   - the actual value of the pointer (the address that the pointer is pointing to)
*/

int get_value(int *p) {
    return *p;
}

void set_value(int *p, int new_value) {
    *p = new_value;
}

void allocateMemory(int **ptr) {
    *ptr = malloc(sizeof(int));
}

int main_pointer_args() {
    int i = 1;

    printf("\nWrite a program that includes a function that modifies a pointers value:\n");

    printf("i = %d, get_value = %d\n", i, get_value(&i));
    set_value(&i, 23);
    printf("i = %d, get_value = %d\n", i, get_value(&i));

    int *ptr = NULL;
    allocateMemory(&ptr);
    *ptr = 7;
    printf("\nValue of *ptr = %d\n", *ptr);
    free(ptr);

    return 0;
}