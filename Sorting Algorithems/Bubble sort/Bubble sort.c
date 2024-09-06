#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXLIST 5
#define TRUE 1
#define FALSE 0

int main() {
    int i,j,temp,L[MAXLIST];

    printf("Enter data for list:\n");

    for(i=0;i<MAXLIST;i++){
        scanf("%d",&L[i]);
    }

    for(i=0;i<=MAXLIST-2;i++){
        for(j=0;j<=MAXLIST-2-i;j++){
        if(L[j+1]<L[j]){
            temp = L[j];
            L[j] = L[j+1];
            L[j+1] = temp;
        }
    }
    }

    printf("The Bubble Sorted List L elements are:\n");
    for(i=0; i<=MAXLIST-1; i++)
    {
        printf("%d\n",L[i]);
    }

    return 0;
}
