#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

/* structure to store a sum and its pair (a,b) */
typedef struct {
    ll sum;
    int a;
    int b;
} SumPair;

/* comparator for qsort: sort by sum (ascending) */
int compare_sumpair(const void *p1, const void *p2) {
    const SumPair *x = (const SumPair *)p1;
    const SumPair *y = (const SumPair *)p2;
    if (x->sum < y->sum) return -1;
    if (x->sum > y->sum) return 1;
    return 0;
}

int main(void) {
    int limit;
    printf("Find Ramanujan-type numbers. Enter max value for a and b (e.g., 100): ");
    if (scanf("%d", &limit) != 1 || limit <= 0) {
        fprintf(stderr, "Invalid limit.\n");
        return 1;
    }

    /* number of pairs with 1 <= a <= b <= limit is limit*(limit+1)/2 */
    size_t capacity = (size_t)limit * (limit + 1) / 2;
    /* check overflow / sanity (very large limit will be memory heavy) */
    if (capacity == 0 || capacity > 100000000) { /* arbitrary safety cap */
        fprintf(stderr, "Limit too large or resulting memory would be excessive.\n");
        return 1;
    }

    SumPair *arr = malloc(sizeof(SumPair) * capacity);
    if (!arr) {
        perror("malloc");
        return 1;
    }

    size_t idx = 0;
    for (int a = 1; a <= limit; ++a) {
        ll a3 = (ll)a * a * a;
        for (int b = a; b <= limit; ++b) {
            ll b3 = (ll)b * b * b;
            arr[idx].sum = a3 + b3;
            arr[idx].a = a;
            arr[idx].b = b;
            idx++;
        }
    }

    /* sort by sum */
    qsort(arr, idx, sizeof(SumPair), compare_sumpair);

    /* scan sorted array for repeated sums */
    int foundAny = 0;
    for (size_t i = 0; i < idx; ) {
        size_t j = i + 1;
        while (j < idx && arr[j].sum == arr[i].sum) j++;

        if (j - i >= 2) {
            /* print the sum and all distinct pairs that make it */
            foundAny = 1;
            printf("%lld =", arr[i].sum);
            for (size_t k = i; k < j; ++k) {
                printf(" %d^3+%d^3", arr[k].a, arr[k].b);
                if (k + 1 < j) printf("  =");
            }
            printf("\n");
        }
        i = j;
    }

    if (!foundAny) {
        printf("No Ramanujan-type numbers found with a,b <= %d\n", limit);
    }

    free(arr);
    return 0;
}
