#include<stdio.h>

int main() {

    int a = 5;

    printf("Value of a in outer block = %d\n", a);

    {
        int a = 15;     // Inner block variable (shadowing)
        printf("Value of a in inner block = %d\n", a);
    }

    printf("Value of a again in outer block = %d\n", a);

    return 0;
}
