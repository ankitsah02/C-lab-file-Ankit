#include <stdio.h>

int main() {
    // Prompt user to enter name and age, then print a greeting
    char name[100];
    int age;

    printf("Please enter your name: ");
    // use scanf to read a single word name (beginner style)
    scanf("%99s", name);

    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Hello, %s\n", name);
    printf("You are %d years old.\n", age);
    return 0;
}
