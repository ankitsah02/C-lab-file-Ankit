#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Address of a = %p, value = %d\n", p1, *p1);
    printf("Address of b = %p, value = %0.2f\n", p2, *p2);
    printf("Address of c = %p, value = %c\n", p3, *p3);

    return 0;
}
