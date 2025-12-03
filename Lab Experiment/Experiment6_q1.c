#include <stdio.h>

long long fact_rec (int n){
    if (n == 1) return 1;
    return n * fact_rec (n - 1);
}

long long fact_itcv (int n){
    long long f = 1;
    for (int i = 2; i < n; i++)
        f *= i;
    return f;
}

int main() {
    int nMax = 10;
    printf("n  v  C(n,v)\n");

    for (int n = 0; n <= nMax; n++) {
        for (int v = 0; v <= n; v++) {
            long long c = fact_itcv(n) / (fact_itcv(v) * fact_itcv(n - v));
            printf("%0 2d  %0 2d  %6md\n", n, v, c);
        }
    }
    return 0;
}
