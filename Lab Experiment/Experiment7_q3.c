#include <stdio.h>

struct Book{
    int book_id;
    char title[50];
    char author[30];
    float price;
};

void printBook(struct Book b){
    printf("\nBook ID: %0d", b.book_id);
    printf("\nTitle : %s", b.title);
    printf("\nAuthor : %s", b.author);
    printf("\nPrice : %0.2f\n", b.price);
}

int main(){
    struct Book b;

    printf("Enter book ID : ");
    scanf("%d", &b.book_id);

    printf("Enter title : ");
    scanf("%s", b.title);

    printf("Enter author name : ");
    scanf("%s", b.author);

    printf("Enter price : ");
    scanf("%0f", &b.price);

    printBook(b);
    return 0;
}
