#include <stdio.h>
#include <math.h>

int main() {
    // Check triangle validity and type (equilateral, isosceles, right-angled, scalene)
    double a, b, c;
    printf("Enter side a: ");
    scanf("%lf", &a);
    printf("Enter side b: ");
    scanf("%lf", &b);
    printf("Enter side c: ");
    scanf("%lf", &c);

    // Check validity: sum of any two sides must be greater than the third
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");

        // Check equilateral
        if (fabs(a - b) < 1e-6 && fabs(b - c) < 1e-6) {
            printf("It is an Equilateral triangle.\n");
        }
        // Check isosceles
        else if (fabs(a - b) < 1e-6 || fabs(b - c) < 1e-6 || fabs(a - c) < 1e-6) {
            printf("It is an Isosceles triangle.\n");
        }
        // Check right-angled using Pythagoras (allow small tolerance)
        else {
            double tol = 1e-3;
            double a2 = a*a, b2 = b*b, c2 = c*c;
            if (fabs(a2 + b2 - c2) < tol || fabs(a2 + c2 - b2) < tol || fabs(b2 + c2 - a2) < tol) {
                printf("It is a Right-angled triangle.\n");
            } else {
                printf("It is a Scalene triangle.\n");
            }
        }
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
