#include <stdio.h>

#define SQUARE(x) x*x
#define CUBE(x) SQUARE(x)*x

int main_square_cube_macro() {
    printf("\nSquare/Cube Macro:\n");
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("Square = %d\n", SQUARE(x));
    printf("Cube = %d\n", CUBE(x));
}