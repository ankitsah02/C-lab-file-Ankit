#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows for consecutive-number triangle: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) return 0;

    int current = 1;
    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= r; c++) {
            printf("%d", current++);
            if (c < r) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
