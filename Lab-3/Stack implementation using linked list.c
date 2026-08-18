#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push() {
    int value;
    struct Node *newNode;

    printf("Enter value: ");
    scanf("%d", &value);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("Value pushed into stack\n");
}

void pop() {
    struct Node *temp;

    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        temp = top;
        printf("%d popped from stack\n", top->data);
        top = top->next;
        free(temp);
    }
}

void display() {
    struct Node *temp;

    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        temp = top;

        printf("Stack elements are:\n");

        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
