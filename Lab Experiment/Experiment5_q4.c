#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p, q;

    printf("Enter m n : ");
    scanf("%d %d", &m, &n);

    printf("Enter p q : ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Incompatible for multiplication\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter A elements : \n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter B elements : \n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Resultant matrix C : \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
