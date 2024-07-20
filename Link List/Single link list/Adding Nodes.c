#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

//Insertion a node at the beginning
struct node* add_node_front(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    temp->link = head;
    head = temp;
    return head;
}

//Insertion a node at the end
void add_node_end(struct node *head, int data)
{
    struct node *ptr,*temp;
    ptr = head;

    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}

//Insertion a node at a certain position


//Deletion of a Node by Key

//Traversal Operation(print)
void traverse_list(struct node *head)
{
    struct node *temp;
    temp = head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main()
{
    //1st Node
    struct node *head;
    head = malloc(sizeof(struct node));  // (struct node*)malloc(sizeof(struct node)); this also correct.
    head->data = 10;
    head->link = NULL; // initially null.but after it will have next node address.

    //2nd Node
    struct node *current;
    current = malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;

    head->link = current;   // set previous node link value as current pointer value.Because current pointer now pointer to 2nd node.

    //3rd Node
    current = malloc(sizeof(struct node));
    current->data = 40;
    current->link = NULL;  // this is null because of this is the last node.

    head->link->link = current;    // set previous node link value as current pointer value.Because current pointer now pointer to 3rd node.

    //Add a node at the beginning using function
    int dataFront;
    printf("Enter a integer value to front: ");
    scanf("%d",&dataFront);
    head = add_node_front(head,dataFront);


    //Add a node at the end using function
    int dataEnd;
    printf("Enter a integer value to end: ");
    scanf("%d",&dataEnd);
    add_node_end(head,dataEnd);


    //Traverse the list
    traverse_list(head);

    return(0);
}
