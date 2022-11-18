#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * - this challenge will test your understanding of double pointers
 *   - how to declare a pointer to a pointer
 *   - how to initialize a pointer to a pointer
 *   - how to access a pointer to a pointer
 *
 * - write a program that creates, assigns and accesses some double pointers
*/

void create_assign_access_double_pointer() {
    srand((unsigned) time(NULL));

    // 1. create a normal integer variable (non pointer) and assign it a random value
    int v = rand();

    // 2. create a single integer pointer variable
    int *p;

    // 3. create a double integer pointer variable
    int **pp;

    // 4. assign the address of the normal integer variable (step 1) to the single pointer (step 2)
    p = &v;

    // 5. assign the address of the single pointer (step 2) to the double pointer variable (step 3)
    pp = &p;

    printf("\nCreate, assign, access double pointer:\n");

    printf("\nAll possible ways to find value of normal integer variable:\n");
    printf("v = %d\n", v);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);

    printf("\nAll possible ways to find the address of the normal integer variable:\n");
    printf("&v = %#08x\n", &v);
    printf("p = %#08x\n", p);
    printf("*pp = %#08x\n", *pp);

    printf("\nAll possible ways to find the value of the single pointer variable:\n");
    printf("&v = %#08x\n", &v);
    printf("p = %#08x\n", p);
    printf("*pp = %#08x\n", *pp);

    printf("\nAll possible ways to find the address of the single pointer variable:\n");
    printf("&p = %#08x\n", &p);
    printf("pp = %#08x\n", pp);

    printf("\nAll possible ways to print the double pointer value and address:\n");
    printf("*pp = %d\n", *pp);
    printf("&pp = %#08x\n", &pp);
}

int main_double_pointers() {
    create_assign_access_double_pointer();
    return 0;
}