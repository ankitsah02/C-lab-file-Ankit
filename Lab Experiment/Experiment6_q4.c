#include <stdio.h>

int ISPRIME (int num){
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++){
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int low, high;
    printf("Enter range:");
    scanf("%d %d", &low, &high);

    printf("Prime number between %d and %d:", low, high);
    for (int i = low; i <= high; i++){
        if (ISPRIME(i))
            printf("%d", i);
    }

    return 0;
}
