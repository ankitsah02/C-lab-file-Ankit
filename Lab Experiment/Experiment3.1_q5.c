#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of rectangles (>=3): ");
    if (scanf("%d", &n) != 1 || n < 3) {
        printf("Enter an integer >= 3.\n");
        return 0;
    }

    double maxP = -1.0;
    int maxIdx = -1;
    double maxL = 0.0, maxB = 0.0;

    for (int i = 1; i <= n; ++i) {
        double L, B;
        printf("Rectangle %d - Enter length and breadth: ", i);
        if (scanf("%lf %lf", &L, &B) != 2) return 0;
        double per = 2.0 * (L + B);
        /* use ternary operator to update maxP and store index/dimensions */
        (per > maxP) ? ( (maxP = per), (maxIdx = i), (maxL = L), (maxB = B) ) : 0;
    }

    printf("Maximum perimeter = %.2f (Rectangle %d: length=%.2f, breadth=%.2f)\n",
           maxP, maxIdx, maxL, maxB);
    return 0;
}
