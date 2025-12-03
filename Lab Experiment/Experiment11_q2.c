#include <stdio.h>

int main() {
    int a, n;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter number of shifts: ");
    scanf("%d", &n);

    // Left Shift
    printf("a << n = %d\n", a << n);

    // Right Shift
    printf("a >> n = %d\n", a >> n);

    return 0;
}
