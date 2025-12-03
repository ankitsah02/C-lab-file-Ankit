#include <stdio.h>

void modify(int *x, float *y) {
    *x = *x + 10;
    *y = *y + 2.5;
}

int main() {
    int a = 5;
    float b = 3.5;

    printf("Before function: a = %d, b = %0.2f\n", a, b);
    modify(&a, &b);
    printf("After function : a = %d, b = %0.2f\n", a, b);

    return 0;
}
