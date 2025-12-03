#include <stdio.h>

// Defining multiple macros for arithmetic operations
#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((a) / (b))

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n--- Arithmetic Operations using Macros ---\n");
    printf("Addition = %d\n", ADD(x, y));
    printf("Subtraction = %d\n", SUB(x, y));
    printf("Multiplication = %d\n", MUL(x, y));

    if (y != 0)
        printf("Division = %d\n", DIV(x, y));
    else
        printf("Division not possible (denominator is zero)\n");

    return 0;
}
