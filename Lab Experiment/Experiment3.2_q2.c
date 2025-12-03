#include <stdio.h>

int main() {
    int n, i, upto;
    printf("Enter an integer for table: ");
    if (scanf("%d", &n) != 1) return 0;
    printf("How many lines? (e.g., 10): ");
    if (scanf("%d", &upto) != 1) upto = 10;

    for (i = 1; i <= upto; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
