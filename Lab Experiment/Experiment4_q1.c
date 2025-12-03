#include<stdio.h>

int x = 10;    // Global variable

void display() {
    printf("Value of x inside display() = %d\n", x);
}

int main() {

    printf("Value of x inside main() = %d\n", x);

    display();

    return 0;
}
