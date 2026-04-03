#include <stdio.h>

int main(void) {
    int a = 5, b = 2;
    double result = (double)a / b;   // fixed: cast to double for floating-point division

    printf("Result = %.2f\n", result);
    return 0;
}
