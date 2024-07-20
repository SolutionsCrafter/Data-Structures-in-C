#include<stdio.h>
#include<stdlib.h>

//Queue
typedef int QueueElement; // Type of elements in the queue

typedef struct node
{
    int item;           // Data item stored in the node
    struct node *link;  // Pointer to the next node in the queue
} Node;                 // Node structure for the queue

typedef enum {FALSE, TRUE} Boolean; // Boolean type definition

typedef struct queue
{
    int no_ele;         // Number of elements in the queue
    Node *front;        // Pointer to the front (head) of the queue
    Node *rear;         // Pointer to the rear (tail) of the queue
    Boolean memoryFull; // Flag indicating if memory allocation failed
} Queue;                // Queue structure

// Function to create a new queue
void createQueue(Queue *q)
{
    q->no_ele = 0;      // Initialize number of elements to 0
    q->front = NULL;    // Initialize front pointer to NULL (empty queue)
    q->rear = NULL;     // Initialize rear pointer to NULL (empty queue)
    q->memoryFull = FALSE; // Initialize memoryFull flag to indicate memory is not full

    printf("--Queue is created--\n"); // Print message indicating queue creation
}

// Function to check if the queue is empty
Boolean isQueueEmpty(const Queue *q)
{
    return (q->front == NULL && q->rear == NULL); // Queue is empty if both front and rear are NULL
}

// Function to check if the queue is full
Boolean isQueueFull(const Queue *q)
{
    return (q->memoryFull); // Queue is full based on memory allocation status
}

// Function to add an element to the rear of the queue (enqueue)
void enqueue(QueueElement data, Queue *q)
{
    Node *temp = malloc(sizeof(Node)); // Allocate memory for a new node

    if (temp == NULL) {
        printf("--Memory allocation failed!--\n"); // If memory allocation fails
        q->memoryFull = TRUE; // Set memoryFull flag to TRUE
    } else {
        temp->item = data; // Assign data to the new node
        temp->link = NULL; // Set the new node's link to NULL

        if (q->rear == NULL) {  // Check if queue is empty
            q->front = temp; // If queue is empty, set both front and rear to the new node
            q->rear = temp;
        } else {
            q->rear->link = temp; // Otherwise, link the current rear to the new node
            q->rear = temp; // Update rear pointer to the new node
        }

        q->no_ele++; // Increment number of elements in the queue
        q->memoryFull = FALSE; // Reset memoryFull flag
    }
}

// Function to remove an element from the front of the queue (dequeue)
void dequeue(QueueElement *data, Queue *q)
{
    if (isQueueEmpty(q)) {
        printf("--Queue is empty!--\n"); // If queue is empty, print message
    } else {
        Node *temp = q->front; // Temporary pointer to store the front node
        *data = temp->item; // Retrieve data from the front node

        q->front = temp->link; // Update front pointer to the next node

        q->no_ele--; // Decrease number of elements in the queue
        if (q->front == NULL) {
            q->rear = NULL; // If front becomes NULL, set rear to NULL as well
        }

        free(temp); // Free memory allocated for the removed node
    }
}

// Function to peek at the element at the front of the queue without removing it
void peek(QueueElement *data, Queue *q)
{
    if (isQueueEmpty(q)) {
        printf("--Queue is empty!--\n"); // If queue is empty, print message
    } else {
        *data = q->front->item; // Retrieve data from the front node without removing it
    }
}

// Function to destroy the queue and free allocated memory
void destroyQueue(Queue *q)
{
    Node *temp;

    while (q->front != NULL) {
        temp = q->front; // Store current front node in temp pointer
        q->front = q->front->link; // Move front pointer to the next node

        free(temp); // Free memory allocated for the current node
    }

    q->rear = NULL; // Set rear pointer to NULL
    q->no_ele = 0; // Reset number of elements to 0
    q->memoryFull = FALSE; // Reset memoryFull flag
}

// Main function to test the queue operations
int main()
{
    Queue q;
    createQueue(&q); // Create a new queue
    QueueElement data; // Variable to store dequeued data

    printf("%d\n", data); // Print uninitialized data (undefined behavior)

    enqueue(20, &q); // Enqueue element 20
    printf("%d\n", data); // Print uninitialized data (undefined behavior)

    peek(&data, &q); // Peek at the front element
    printf("%d\n", data); // Print the peeked data

    enqueue(40, &q); // Enqueue element 40
    enqueue(60, &q); // Enqueue element 60

    dequeue(&data, &q); // Dequeue an element
    printf("%d\n", data); // Print the dequeued data

    dequeue(&data, &q); // Dequeue an element
    printf("%d\n", data); // Print the dequeued data

    dequeue(&data, &q); // Dequeue an element
    printf("%d\n", data); // Print the dequeued data

    return 0;
}
