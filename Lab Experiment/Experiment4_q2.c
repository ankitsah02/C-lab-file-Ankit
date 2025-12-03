#include<stdio.h>

void test() {
    int y = 20;   // Local variable
    printf("Value of local variable y inside test() = %d\n", y);
}

int main() {

    // y is not accessible here
    test();

    return 0;
}
