#include <stdio.h>

#define IS_UPPER(c) (c >= 'A' && c <= 'Z')
#define IS_LOWER(c) (c >= 'a' && c <= 'z')

int main_uppercase_lowercase_macro() {
    printf("\nUppercase/Lowercase Macro:\n");
    printf("Enter char: ");
    char c = getchar();
    printf("IS_UPPER = %d\n", IS_UPPER(c));
    printf("IS_LOWER = %d\n", IS_LOWER(c));
}