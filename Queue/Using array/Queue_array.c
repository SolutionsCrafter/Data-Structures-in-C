#include<stdio.h>
#include<stdlib.h>

//Contiguous Implementation of a Queue(using array)

#define MAXQUEUE 5

typedef int QueueElement;   //now QueueElement can be used instead of int.

typedef struct queue
{
    QueueElement items[MAXQUEUE];
    int front;
    int rear;
    int count;
}Queue;

//Create queue function
void createQueue(Queue *q)
{
    q->count = 0;
    q->front = 0;
    q->rear = -1;
}


#define TRUE 1
#define FALSE 0

//isQueueEmpty function
int IsQueueEmpty(Queue *q)
{
    if(q->rear < q->front){
        return(TRUE);
    }
    else{
        return(FALSE);
    }
}
//isQueueFull function
int IsQueueFull(Queue *q)
{
    if(q->rear == MAXQUEUE-1){
        return (TRUE);
    }
    else{
        return (FALSE);
    }
}

//Append an element to the queue
void enqueue(Queue *q,QueueElement data)
{
    if(IsQueueFull(q)){
        printf("Queue is full!\n");
        exit(1);
    }
    else{
        q->items[++(q->rear)] = data;
        printf("enqueue item: %d\n",q->items[q->rear]);
        q->count++;
    }
}

//Serve an element from the queue
void dequeue(Queue *q,QueueElement *data)
{
    if(IsQueueEmpty(q)){
        printf("Queue is empty!\n");
        exit(1);
    }
    else{
        *data = q->items[(q->front)++];
        q->count--;
    }
}

//Peek
void peek(Queue *q,QueueElement *data)
{
    if(IsQueueEmpty(q)){
        printf("Queue is empty!\n");
        exit(1);
    }
    else{
        //printf("Peeked item: %d\n",q->items[q->front]);
        *data = q->items[q->front];
    }
}

int main()
{
    Queue q;
    QueueElement data;

    createQueue(&q);

    enqueue(&q,20);

    peek(&q,&data);
    printf("peek item: %d\n",data);

    dequeue(&q,&data);
    printf("dequeue item: %d\n",data);

    //peek(&q,&data);
    //printf("peek item: %d\n",data);

    enqueue(&q,40);
    enqueue(&q,60);
    enqueue(&q,80);

    dequeue(&q,&data);
    printf("dequeue item: %d\n",data);

    peek(&q,&data);
    printf("peek item: %d\n",data);




    return 0;
}
