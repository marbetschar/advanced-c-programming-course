#include <stdio.h>

/**
 * Our second challenge is to write a c program taht finds the sum of various numbers
 * You cannot pass any variable representing the running total of the sum() function
*/

static int total_sum = 0;

int sum(int num) {
    /**
     * find sum a number
    */
    total_sum += num;
    return total_sum;
}

//int main() {
//    printf("%d ", sum(25));
//    printf("%d ", sum(15));
//    printf("%d ", sum(30));
//    return 0;
//}

/**
 * output:
 * 25 40 70
*/