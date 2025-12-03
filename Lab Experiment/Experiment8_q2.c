#include <stdio.h>

int main() {
    int a = 10, *p1 = &a;
    float b = 5.5, *p2 = &b;
    char c = 'A', *p3 = &c;

    printf("Original addresses:\n");
    printf(" int : %p\n float : %p\n char : %p\n", p1, p2, p3);

    p1++;
    p2++;
    p3++;

    printf("\nAfter increment:\n");
    printf(" int : %p\n float : %p\n char : %p\n", p1, p2, p3);

    p1--;
    p2--;
    p3--;

    printf("\nAfter decrement:\n");
    printf(" int : %p\n float : %p\n char : %p\n", p1, p2, p3);

    return 0;
}
