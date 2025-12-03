#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex readComplex(void) {
    Complex c;
    printf("Enter real part: ");
    if (scanf("%f", &c.real) != 1) c.real = 0.0f;
    printf("Enter imaginary part: ");
    if (scanf("%f", &c.imag) != 1) c.imag = 0.0f;
    return c;
}

void writeComplex(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

Complex add(Complex a, Complex b) {
    Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}

Complex subtract(Complex a, Complex b) {
    Complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}

int main(void) {
    Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("Enter second complex number:\n");
    c2 = readComplex();

    printf("\nFirst complex number: ");
    writeComplex(c1);

    printf("Second complex number: ");
    writeComplex(c2);

    sum = add(c1, c2);
    diff = subtract(c1, c2);

    printf("\nSum = ");
    writeComplex(sum);

    printf("Difference = ");
    writeComplex(diff);

    return 0;
}
