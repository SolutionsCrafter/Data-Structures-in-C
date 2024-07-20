#include<stdio.h>
#include<stdlib.h>

#define MAXQUEUE 5

typedef enum {TRUE=1,FALSE=0}Boolean;

typedef int QueueElement;

typedef struct queue
{
    QueueElement item[MAXQUEUE];
    int count;
    int front;
    int rear;
}Queue;

void createQueue(Queue *q)
{
    q->count = 0;
    q->front = 0;
    q->rear = -1;
}

Boolean isQueueEmpty(Queue *q)
{
    return (q->rear < q->front)? TRUE:FALSE;
}

Boolean isQueueFull(Queue *q)
{
   return (q->rear == MAXQUEUE-1)? TRUE:FALSE;
}

void enqueue(Queue *q,QueueElement data)
{
    if(isQueueFull(q)){
        printf("Queue is full!\n");
        exit(1);
    }
    else{
        q->item[++(q->rear)] = data;
        printf("enqueue item: %d\n",q->item[q->rear]);
        q->count++;
    }
}

 void dequeue(Queue *q,QueueElement *data)
{
    if(isQueueEmpty(q)){
        printf("Queue is empty!\n");
        exit(1);
    }
    else{
        *data = q->item[q->front++];
        q->count--;
    }
}

void peek(Queue *q,QueueElement *data)
{
    if(isQueueEmpty(q)){
        printf("Queue is empty!\n");
        exit(1);
    }
    else{
        //printf("Peeked item: %d\n",q->items[q->front]);
        *data = q->item[q->front];
    }

}

int main()
{
    Queue q;
    QueueElement data;

    createQueue(&q);

    enqueue(&q,20);

    peek(&q,&data);
    printf("peeked item: %d\n",data);

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
    printf("peeked item: %d\n",data);

    return 0;
}
