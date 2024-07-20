#include<stdio.h>
#include<stdlib.h>

/*
Singly Linked List:

    1. Traversal is forward-only.
    2. Each node contains a data field and a pointer to the next node in the sequence.
    3. The last node points to NULL, indicating the end of the list.
    4. Simple to implement and memory-efficient.
*/

// Create a node structure
struct node {
    int data;            // Data field to store the value
    struct node *link;   // Pointer to the next node in the list
};

int main() {
    // 1st Node
    struct node *head;
    head = malloc(sizeof(struct node));  // Allocate memory for the first node. //Alternative:(struct node*)malloc(sizeof(struct node));
    head->data = 10;                     // Assign data to the first node
    head->link = NULL;                   // Initially null, will later point to the next node

    // 2nd Node
    struct node *current;
    current = malloc(sizeof(struct node));  // Allocate memory for the second node
    current->data = 20;                     // Assign data to the second node
    current->link = NULL;                   // Set link to null as it is currently the last node

    head->link = current;   // Link the first node to the second node

    // 3rd Node
    current = malloc(sizeof(struct node));  // Allocate memory for the third node
    current->data = 40;                     // Assign data to the third node
    current->link = NULL;                   // Set link to null as it is the last node

    head->link->link = current;    // Link the second node to the third node

    return 0;  // End of program
}
