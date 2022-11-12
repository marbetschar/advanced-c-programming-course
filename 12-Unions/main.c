#include <stdio.h>

/**
 * this challenge will test your understanding of unions in c programming
 * - write a program which will define a union and then use this union to assign and access its members
 * - you must define a union named student that consists of the following three elements:
 *   char letterGrade, int roundedGrade, float exactGrade
 * - your program should declare two union variables inside the main method (variable1 and variable2)
 * - your program should assign random values to variable1
 *   - you then need to display each value for each member of this union
 *   - you should notice that something is wrong
 * - your program should then assign a value (using variable2) to its member letterGrade and then print it out
 * - your program should then assign a value (using variable2) to its member roundedGrade and then print it out
 * - your program should then assign a value (using variable2) to its member exactGrade and then print it out
 * - you should notice the difference in output with variable1 and variable2 - why is there a difference?
*/

union student {
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

int main() {
    printf("\nUnions\n");

    union student variable1 = {
        .letterGrade = 'a',
        .roundedGrade = 1,
        .exactGrade = 0.9
    };
    printf("variable1.letterGrade: %c\n", variable1.letterGrade);
    printf("variable1.roundedGrade: %d\n", variable1.roundedGrade);
    printf("variable1.exactGrade: %f\n", variable1.exactGrade);

    printf("\n");

    union student variable2;
    variable2.letterGrade = 'A';
    printf("variable2.letterGrade: %c\n", variable2.letterGrade);
    variable2.roundedGrade = 10;
    printf("variable2.roundedGrade: %d\n", variable2.roundedGrade);
    variable2.exactGrade = 9.6;
    printf("variable2.exactGrade: %f\n", variable2.exactGrade);

    /**
     * Since we are only able to read/write one item at a time in a union
     * we can see that in variable1 the only valid output is the last
     * assignment (= exactGrade) - all others print some undefined value.
     *
     * The usage of variable2 is correct - and therefore prints also the
     * correct values.
     */

    return 0;
}
