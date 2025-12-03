#include <stdio.h>
#include <string.h>

void Reverse (char str[]){
    int i, len;
    char temp;

    len = strlen(str);
    for (i = 0; i < (len/2); i++){
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main(){
    char str[50];

    printf("Enter a string:");
    gets(str);

    Reverse(str);

    printf("Reverse string = %s", str);

    return 0;
}

