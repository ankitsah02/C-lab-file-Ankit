#include <stdio.h>

union Address{
    char name[30];
    char home_address[50];
    char hostel_address[50];
    char city[20];
    char state[20];
    char zip[10];
};

int main(){
    union Address a;

    printf("Enter your present address:");
    scanf("%s", a.home_address);

    printf("Your address is: %s\n", a.home_address);

    return 0;
}
