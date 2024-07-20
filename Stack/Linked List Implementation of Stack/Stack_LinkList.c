#include<stdio.h>
#include<stdlib.h>

typedef enum{FALSE,TRUE}Boolean;

typedef int StackElement;

typedef struct node
{
    StackElement item;
    struct node *link;
}Node;

typedef struct stack
{
    int no_ele;
    Boolean memoryFull;
    Node *top;
}Stack;

//Create stack
void createStack(Stack *s)
{
    s->no_ele = 0;
    s->top = NULL;
    s->memoryFull = FALSE;

    printf("--Stack is created--\n");
}

//Check stack empty
Boolean isStackEmpty(const Stack *s)
{
    return (s->top == NULL);
}

//Check stack full
Boolean isStackFull(const Stack *s)
{
    return (s->memoryFull); //Link list stack has not fixed size.Therefor it checked does memory full.
}

//Push
void push(StackElement data, Stack *s)
{
    Node *temp = malloc(sizeof(Node));

    if(temp == NULL){
        printf("--Memory allocation failed!--\n");
        s->memoryFull = TRUE;
    }
    else{
        temp->item = data;
        temp->link = s->top;
        s->top = temp;

        s->no_ele++;
        s->memoryFull = FALSE;

        //printf("Pushed item: %d\n",data);
    }
}

//Pop
void pop(StackElement *data, Stack *s)    //When using the call by reference(*data , *s) it effect on original value.If i use call by value(data , s) it's a copy of original value and it's not affect on original value.
{
    if(isStackEmpty(s)){    //This pass s insted of *s because of inside function s already a pointer.
        printf("--Stack is empty!--\n");
    }
    else{
        Node *temp = s->top;    //Create a temporary pointer and get top pointer value to find top node
        *data = temp->item;
        s->top = temp->link;

        s->no_ele--;
        free(temp);

        //printf("Popped item: %d\n",*data);
    }
}

//peek
void peek(StackElement *data,const Stack *s)
{
    if(isStackEmpty(s)){
        printf("--Stack is empty!--\n");
    }
    else{
        *data = s->top->item;

        //printf("Peeked item: %d\n",*data);
    }
}

//Destroy stack
void destroyStack(Stack *s)
{
    Node *temp;

    while(s->top != NULL){
        temp = s->top;
        s->top = s->top->link;
        free(temp);

    }
    s->no_ele = 0;
    s->memoryFull = FALSE;

    printf("--Stack destroyed!--\n");
}

int main()
{
    Stack s;
    createStack(&s);
    StackElement data;

    push(20,&s);
    peek(&data,&s);
    printf("data: %d\n",data);

    pop(&data,&s);
    printf("data: %d\n",data);

    push(40,&s);
    peek(&data,&s);
    printf("data: %d\n",data);

    push(60,&s);
    printf("data: %d\n",data);

    push(80,&s);
    printf("data: %d\n",data);

    peek(&data,&s);
    printf("data: %d\n",data);

    pop(&data,&s);
    printf("data: %d\n",data);

    pop(&data,&s);
    printf("data: %d\n",data);


    return 0;
}








