# Data Structures in C

This repository contains implementations of various fundamental data structures in C, including stacks, queues, and lists using both arrays and linked lists.

## Contents

1. **Singly Linked List**
   ![Singly Linked List](path/to/singly_linked_list.png)
2. **List**
   ![List](path/to/list.png)
    - Contiguous Implementation
    - Linked List Implementation
3. **Stack**
   ![Stack](https://github.com/SolutionCrafter/Data-Structures-in-C/raw/main/images/Stack.png)
    - Contiguous Implementation
    - Linked List Implementation
4. **Queue**
   ![Queue](path/to/queue.png)
    - Contiguous Implementation
    - Linked List Implementation
    - Circular Queue
    - Dequeue
5. **Circular Queue** *(Included in Queue)*
6. **Dequeue** *(Included in Queue)*

## Singly Linked List

A singly linked list is a data structure that contains a sequence of nodes. Each node contains a data field and a pointer to the next node in the sequence. The last node points to `NULL`, indicating the end of the list. This is a simple and memory-efficient structure.

- **File:** `singly_linked_list.c`
- **Features:**
  - Forward-only traversal
  - Dynamic memory allocation for nodes

## List

A list is a collection of elements, with operations to insert, delete, and access elements. This repository includes implementations of lists using both arrays and linked lists.

### Contiguous Implementation of List

- **File:** `list_array.c`
- **Features:**
  - Fixed-size array implementation
  - Insert and delete operations
  - Efficient random access
  - List overflow and underflow handling

### Linked List Implementation of List

- **File:** `list_linked_list.c`
- **Features:**
  - Dynamic size
  - Insert and delete operations
  - Efficient memory usage
  - Traversal from head to tail

## Stack

A stack is a Last In First Out (LIFO) data structure. The last element added to the stack is the first one to be removed. This repository includes stack implementations using both arrays and linked lists.

### Contiguous Implementation of Stack

- **File:** `stack_array.c`
- **Features:**
  - Fixed-size array implementation
  - Push and pop operations
  - Stack overflow and underflow handling

### Linked List Implementation of Stack

- **File:** `stack_linked_list.c`
- **Features:**
  - Dynamic size
  - Push and pop operations
  - Efficient memory usage

## Queue

A queue is a First In First Out (FIFO) data structure. The first element added to the queue is the first one to be removed. This repository includes queue implementations using both arrays and linked lists, as well as circular and double-ended queues.

### Contiguous Implementation of Queue

- **File:** `queue_array.c`
- **Features:**
  - Fixed-size array implementation
  - Enqueue and dequeue operations
  - Queue overflow and underflow handling

### Linked List Implementation of Queue

- **File:** `queue_linked_list.c`
- **Features:**
  - Dynamic size
  - Enqueue and dequeue operations
  - Efficient memory usage

### Circular Queue

A circular queue is a linear data structure that follows the FIFO principle but connects the end of the queue back to the beginning, forming a circle. This allows for efficient use of storage space.

- **File:** `circular_queue.c`
- **Features:**
  - Fixed-size array implementation
  - Enqueue and dequeue operations
  - Efficient utilization of space using circular indexing
  - Queue overflow and underflow handling

### Dequeue

A dequeue (double-ended queue) is a linear data structure that allows insertion and deletion from both ends (front and rear).

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
