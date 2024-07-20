//Test c

#include<stdio.h>
#include<stdlib.h>

#define MAXSTACK 5

// Define stackEntry as int
typedef int stackEntry;    // The declaration typedef int stackEntry; is a type definition in C. It creates an alias or synonym for the type int called stackEntry.(stackEntry x = 10; == int x = 10;)

// Define the stack structure
typedef struct
{
    int top;                // Index of the top element
    stackEntry entry[MAXSTACK];  // Array to hold stack entries
} stack;

// Function to initialize the stack
void createStack(stack *y)
{
    y->top = -1;  // Set top to -1 indicating the stack is empty
}

// Define Boolean type for clarity
typedef enum { false, true } Boolean;
/**
This defines an unnamed enumeration with two constants, false and true.
In C, an enum (short for "enumeration") is a user-defined type that consists of a set of named integer constants.
By default, the first constant in an enumeration is assigned the value 0,
    the second is assigned 1, and so on. Therefore, in this enumeration, false is 0 and true is 1.
**/


// Function to check if the stack is empty
Boolean isStackEmpty(const stack *s)
{
    return (s->top == -1);  // Stack is empty if top is -1
}

// Function to check if the stack is full
Boolean isStackFull(const stack *s)
{
    return (s->top == MAXSTACK - 1);  // Stack is full if top is at the last index
}

// Function to push an item onto the stack
void push(stackEntry item, stack *s)
{
    if (!isStackFull(s))  // Check if the stack is not full
    {
        s->entry[++s->top] = item;  // Increment top and add item to stack
    }
    else
    {
        printf("----Stack is full-----");
        exit(1);  // Exit if stack is full
    }
}

// Function to pop an item from the stack
void pop(stackEntry *item, stack *s)
{
    if (!isStackEmpty(s))  // Check if the stack is not empty
    {
        *item = s->entry[s->top--];  // Retrieve item and decrement top
    }
    else
    {
        printf("----Stack is empty----");
        exit(1);  // Exit if stack is empty
    }
}

// Function to peek at the top item of the stack
void peek(stackEntry *item, stack *s)
{
    if (!isStackEmpty(s))  // Check if the stack is not empty
    {
        *item = s->entry[s->top];  // Retrieve the top item without decrementing top
    }
    else
    {
        printf("----Stack is empty----");
        exit(1);  // Exit if stack is empty
    }
}

// Function to destroy the stack (reset to initial state)
void destroyStack(stack *s)
{
    s->top = -1;  // Reset the stack to its initial state
}

int main()
{
    stack s;

    createStack(&s);  // Initialize the stack

    if (isStackEmpty(&s))
    {
        printf("Stack is empty!\n\n");  // Check if stack is empty
    }

    int count, pushItem, poppedItem, peekedItem;

    printf("How many items do you want to push?  ");
    scanf("%d", &count);  // Get the number of items to push


    for (int n = 0, i = 1; n < count; n++)
    {
        if (n == MAXSTACK)  // Check if stack is full
        {
            printf("--Stack is full!!--\n");
            break;  // Exit loop if stack is full
        }

        printf("\nEnter item no%d: ", i++);
        scanf("%d", &pushItem);  // Get item to push
        push(pushItem, &s);  // Push item onto stack
    }

    peek(&peekedItem, &s);  // Peek at the top item
    printf("\nPeek item: %d\n\n", peekedItem);  // Display the peeked item

    pop(&poppedItem, &s);  // Pop the top item
    printf("Popped item: %d\n\n", poppedItem);  // Display the popped item

    peek(&peekedItem, &s);  // Peek at the new top item
    printf("Peek item: %d\n\n", peekedItem);  // Display the new peeked item

    return(0);  // Exit the program
}
