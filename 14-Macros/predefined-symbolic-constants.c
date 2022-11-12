#include <stdio.h>

int main_predefined_symbolic_constants() {
    printf("\nPredefined Symbolic Constants:\n");
    printf("%s:%d Date = %s, Time = %s, STDC == %d", __FILE__, __LINE__, __DATE__, __TIME__, __STDC__);
}