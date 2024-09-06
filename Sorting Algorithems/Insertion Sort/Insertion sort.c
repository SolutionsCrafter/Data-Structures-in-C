#include <stdio.h> //Include Files
#include <stdlib.h>
#include <stdbool.h>

#define MAXLIST 5
#define TRUE 1
#define FALSE 0

int main() {
int i, j, k, L[MAXLIST];

    L[0] = 100;
    L[1] = 23;
    L[2] = 45;
    L[3] = 7;
    L[4] = 70;

for (i=1; i<= MAXLIST-1; i++) { //Using INSERTION SORT
    j=i-1;
    while (j>=0){
if (L[j]>L[j+1]){
    k=L[j];
    L[j]=L[j+1];
    L[j+1]=k;
    }
    j=j-1;
    }
}
for (i=0; i<= MAXLIST-1; i++){
        printf("The Insertion Sorted List L elements are %d\n", L[i]); }
return 0;
};
