#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("a = %d  b = %d\n", a, b);

    // Bitwise AND
    printf("a & b = %d\n", a & b);

    // Bitwise OR
    printf("a | b = %d\n", a | b);

    // Bitwise NOT of a
    printf("~a = %d\n", ~a);

    // Bitwise NOT of b
    printf("~b = %d\n", ~b);

    return 0;
}
