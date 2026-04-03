#include <stdio.h>

int main(void) {
    int a = 5, b = 2;
    double result = a / b;   // logical error

    printf("Result = %.2f\n", result);
    return 0;
}