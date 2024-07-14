# Data Structures in C

This repository contains implementations of various fundamental data structures in C, including stacks and queues using both arrays and linked lists.

## Contents

1. **Singly Linked List**
2. **Stack**
    - Using Array
    - Using Linked List
3. **Queue**
    - Using Array
    - Using Linked List
4. **Circular Queue**
    - Contiguous Implementation
5. **Dequeue**
    - Contiguous Implementation

## Singly Linked List

A singly linked list is a data structure that contains a sequence of nodes. Each node contains a data field and a pointer to the next node in the sequence. The last node points to `NULL`, indicating the end of the list. This is a simple and memory-efficient structure.

- **File:** `singly_linked_list.c`
- **Features:**
  - Forward-only traversal
  - Dynamic memory allocation for nodes

## Stack

A stack is a Last In First Out (LIFO) data structure. The last element added to the stack is the first one to be removed. This repository includes stack implementations using both arrays and linked lists.

### Stack Using Array

- **File:** `stack_array.c`
- **Features:**
  - Fixed-size array implementation
  - Push and pop operations
  - Stack overflow and underflow handling

### Stack Using Linked List

- **File:** `stack_linked_list.c`
- **Features:**
  - Dynamic size
  - Push and pop operations
  - Efficient memory usage

## Queue

A queue is a First In First Out (FIFO) data structure. The first element added to the queue is the first one to be removed. This repository includes queue implementations using both arrays and linked lists.

### Queue Using Array

- **File:** `queue_array.c`
- **Features:**
  - Fixed-size array implementation
  - Enqueue and dequeue operations
  - Queue overflow and underflow handling

### Queue Using Linked List

- **File:** `queue_linked_list.c`
- **Features:**
  - Dynamic size
  - Enqueue and dequeue operations
  - Efficient memory usage

## Circular Queue

A circular queue is a linear data structure that follows the FIFO principle but connects the end of the queue back to the beginning, forming a circle. This allows for efficient use of storage space.

### Contiguous Implementation of Circular Queue

- **File:** `circular_queue.c`
- **Features:**
  - Fixed-size array implementation
  - Enqueue and dequeue operations
  - Efficient utilization of space using circular indexing
  - Queue overflow and underflow handling

## Dequeue

A dequeue (double-ended queue) is a linear data structure that allows insertion and deletion from both ends (front and rear).

### Contiguous Implementation of Dequeue

- **File:** `dequeue.c`
- **Features:**
  - Fixed-size array implementation
  - Insert and delete operations at both front and rear ends
  - Efficient utilization of space
  - Dequeue overflow and underflow handling

## How to Compile

Each file can be compiled using the GCC compiler. For example, to compile `singly_linked_list.c`, use the following command:

```bash
gcc -o singly_linked_list singly_linked_list.c
