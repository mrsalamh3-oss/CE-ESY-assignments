#include <stdio.h>
#include <string.h>

#define SIZE 20

typedef struct {
    char buffer[SIZE];
    int frontIndex;
    int rearIndex;
    int currentSize;
} CircularQueue;

void initialize(CircularQueue *q) {
    q->frontIndex = 0;
    q->rearIndex = 0;
    q->currentSize = 0;
}

int isQueueEmpty(const CircularQueue *q) {
    return q->currentSize == 0;
}

int isQueueFull(const CircularQueue *q) {
    return q->currentSize == SIZE;
}

void push(CircularQueue *q, char value) {
    if (isQueueFull(q)) {
        printf("Queue Overflow\n");
        return;
    }
    q->buffer[q->rearIndex] = value;
    q->rearIndex = (q->rearIndex + 1) % SIZE;
    q->currentSize++;
}

char pop(CircularQueue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue Underflow\n");
        return '\0';
    }
    char value = q->buffer[q->frontIndex];
    q->frontIndex = (q->frontIndex + 1) % SIZE;
    q->currentSize--;
    return value;
}

int main() {
    CircularQueue q;
    initialize(&q);

    char input[50];
    printf("Enter your name: ");
    scanf("%49s", input);

    strcat(input, "CE-ESY");

    for (int i = 0; i < (int)strlen(input); i++) {
        push(&q, input[i]);
    }

    while (!isQueueEmpty(&q)) {
        char ch = pop(&q);
        printf("%c", ch);
    }

    return 0;
}
