#include <stdio.h>
#include <stdlib.h>

#define MAXLIST 5
#define EMPTY 0
#define FULL MAXLIST

typedef enum{FALSE,TRUE}Boolean;

typedef char listData;

typedef int position;

typedef struct list
{
   listData entry[MAXLIST];
   int count;
}List;

createList(List *l)
{
    l->count = 0;
}

Boolean isListEmpty(const List *l)
{
    return (l->count == EMPTY);
}

Boolean isListFull(const List *l)
{
    return (l->count == FULL);
}

int listSize(List *l)
{
    return (l->count);
}

void insertEnd(List *l, listData data)
{
    if(isListFull(l)){
        Warning("Attempt to insert at the end of a full list");
    }
    else{
        l->entry[l->count++] == data;
    }
}

void Warning(char *message)
{
printf("Warning : %s\n", message);
}

void Error(char *message)
{
printf("Error : %s \n", message);
exit(1);
}

void insertPosition(List *l,position p, listData data)
{
    if(isListFull(l)){
        Error("Attempt to insert an entry into a full list");
    }
    else if(p<0 || p>listSize(l)){
        Error("attempt to insert a position not in the list");
    }
    else{
        int i;
        for(i = listSize(l)-1; i>=p; i--){
            l->entry[i+1] = l->entry[i];
        }
        l->entry[p] = data;
        l->count++;
    }
}

void DeletePosition(List *l, position p, listData *data)
{
    int i;
    if(isListEmpty(l)){
        Error("Attempt to delete an entry from an empty list");
    }
    else if(p<0 || p>listSize(l)){
        Error("attempt to insert a position not in the list");
    }
    else{
        *data = l->entry[p];

        for(i = p; i<listSize(l); i++){
            l->entry[p] = l->entry[p+1];
        }
        l->count--;
    }
}

void retriveList(List *l,position p, listData *data)
{
    if(isListEmpty(l)){
        Error("Attempt to delete an entry from an empty list");
    }
    else if(p<0 || p>listSize(l)){
        Error("attempt to insert a position not in the list");
    }
    else{
        *data = l->entry[p];
    }
}


void replaceList(List *l,position p, listData data)
{
    if(isListFull(l)){
        Error("Attempt to replace an entry of an empty list");
    }
    else if (p < 0 || p >= listSize(l)){
        Error("attempt to replace an entry at a position not in the list");
    }
    else{
        l->entry[p] = data;
    }
}

void TraverselList(const List *l)
{
    int i;
    for(i = 0; i<listSize(l); i++){
        l->entry[i];
    }
}

int main()
{











    return 0;
}
















