#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 5  // Define the size of the ring buffer

typedef struct 
{
    int buffer[BUFFER_SIZE];  // Array to hold buffer elements
    int head;                 // Points to the front of the buffer
    int tail;                 // Points to the rear of the buffer
    int size;                 // Tracks the number of elements in the buffer
} RingBuffer;

// Initialize the ring buffer
void initBuffer(RingBuffer *rb) 
{
    rb->head = 0;
    rb->tail = 0;
    rb->size = 0;
}

// Check if the buffer is empty
bool isEmpty(RingBuffer *rb) 
{
    return rb->size == 0;
}

// Check if the buffer is full
bool isFull(RingBuffer *rb) 
{
    return rb->size == BUFFER_SIZE;
}

// Add an element to the buffer
bool enqueue(RingBuffer *rb, int value) 
{
    if (isFull(rb)) 
    {
        printf("Buffer is full. Cannot enqueue %d\n", value);
        return false;
    }
    rb->buffer[rb->tail] = value;
    rb->tail = (rb->tail + 1) % BUFFER_SIZE;  // Move tail to the next position
    rb->size++;
    return true;
}

// Remove an element from the buffer
bool dequeue(RingBuffer *rb, int *value) 
{
    if (isEmpty(rb)) 
    {
        printf("Buffer is empty. Cannot dequeue\n");
        return false;
    }
    *value = rb->buffer[rb->head];
    rb->head = (rb->head + 1) % BUFFER_SIZE;  // Move head to the next position
    rb->size--;
    return true;
}

// Print buffer elements
void printBuffer(RingBuffer *rb) 
{
    if (isEmpty(rb)) 
    {
        printf("Buffer is empty\n");
        return;
    }
    printf("Buffer contents: ");
    for (int i = 0; i < rb->size; i++) 
    {
        int index = (rb->head + i) % BUFFER_SIZE;
        printf("%d ", rb->buffer[index]);
    }
    printf("\n");
}

int main() 
{
    RingBuffer rb;
    initBuffer(&rb);

    // Enqueue some elements
    enqueue(&rb, 1);
    enqueue(&rb, 2);
    enqueue(&rb, 3);
    enqueue(&rb, 4);
    enqueue(&rb, 5);

    printBuffer(&rb);

    // Attempt to enqueue another element (should fail since the buffer is full)
    enqueue(&rb, 6);

    // Dequeue a few elements
    int value;
    dequeue(&rb, &value);
    printf("Dequeued: %d\n", value);
    dequeue(&rb, &value);
    printf("Dequeued: %d\n", value);

    printBuffer(&rb);

    // Enqueue more elements to wrap around
    enqueue(&rb, 6);
    enqueue(&rb, 7);

    printBuffer(&rb);

    return 0;
}
