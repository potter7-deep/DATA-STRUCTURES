#include <stdio.h>
#define max 5

int stack[max], i, value;
int top = -1;

void push(int value) {
    if (top == max - 1)
        printf("\nSTACK OVERFLOW!\n");
    else {
        top++;
        stack[top] = value;
        printf("\n%d pushed to stack\n", value);
    }
}

void pop() {
    if (top == -1)
        printf("STACK UNDERFLOW!\n");
    else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1)
        printf("STACK IS EMPTY!\n");
    else {
        printf("Stack elements:\n");
        for (i = top; i >= 0; i--)
            printf("%d, ", stack[i]);
    }
}

int main() {
    int choice;
    while (1 < 2) {
        printf("\nSTACK CHOICES\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
