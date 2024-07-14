#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void printList(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main()
{
    //Node 1
    struct node *head = malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    //Node 2
    struct node *current = malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link = current;

    //Node 3
    current = malloc(sizeof(struct node));
    current->data = 40;
    current->link = NULL;
    head->link->link = current;

    //Node 4
    current = malloc(sizeof(struct node));
    current->data = 60;
    current->link = NULL;
    head->link->link->link = current;

    printList(head);

    return(0);
}
