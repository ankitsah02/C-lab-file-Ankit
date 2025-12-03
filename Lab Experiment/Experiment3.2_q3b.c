#include <stdio.h>

/* Compute nCr using iterative multiplicative method to avoid overflow as much as possible */
long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r > n - r) r = n - r;
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i) / (i + 1);
    }
    return res;
}

int main() {
    int rows;
    printf("Enter number of rows for Pascal's triangle: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) return 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%lld", nCr(i, j));
            if (j < i) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
