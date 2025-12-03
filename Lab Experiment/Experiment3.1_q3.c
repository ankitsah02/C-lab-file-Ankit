#include <stdio.h>
#include <math.h>

int main(void) {
    double x1,y1,x2,y2,x3,y3;
    printf("Enter x1 y1 x2 y2 x3 y3: ");
    if (scanf("%lf %lf %lf %lf %lf %lf", &x1,&y1,&x2,&y2,&x3,&y3) != 6) return 0;

    /* Twice area of triangle = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) */
    double area2 = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);

    if (fabs(area2) < 1e-9) {
        printf("Points are collinear.\n");
    } else {
        printf("Points are NOT collinear.\n");
    }
    return 0;
}
