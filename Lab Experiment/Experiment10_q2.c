#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtPos(struct Node** head, int pos, int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;

    // If inserting at position 1
    if (pos == 1) {
        newnode->next = *head;
        *head = newnode;
        return;
    }

    struct Node* temp = *head;
    
    // Traverse to (pos-1)th node
    for (int i = 1; i < pos - 1 && temp; i++)
        temp = temp->next;

    if (!temp) {
        printf("Position out of range!\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

int main() {
    struct Node* head = NULL;
    int pos, value;

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    insertAtPos(&head, pos, value);

    printf("Updated Linked List\n");
    return 0;
}
