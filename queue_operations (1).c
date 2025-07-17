#include <stdio.h>
#define max 5

int queue[max], value, i;
int front = -1, rear = -1;

// Enqueue operation
void enqueue(int value) {
    if (rear == max - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = value;
        printf("%d enqueued\n", value);
    }
}

// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
        printf("%d dequeued\n", queue[front++]);
}

// Display operation
void display() {
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else {
        printf("Queue elements:\n");
        for (i = front; i <= rear; i++)
            printf("%d, ", queue[i]);
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Queue Operations ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
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
    return 0;
}