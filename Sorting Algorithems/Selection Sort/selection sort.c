#include <stdio.h> //Include Files
#include <stdlib.h>
#include <stdbool.h>

#define MAXLIST 5
#define TRUE 1
#define FALSE 0

int main() {
    int i, j, k, min1, L[MAXLIST];
    L[0] = 100;
    L[1] = 23;
    L[2] = 45;
    L[3] = 7;
    L[4] = 70;

for (i=0; i<= MAXLIST-2; i++) { //Using SELECTION SORT4
    min1 = i;

    for (j=i+1; MAXLIST-1;i++)
    {
    if (L[j]<L[min1]){
    min1 = j;
    k=L[i];
    L[i]=L[min1];
    L[min1]=k;
        }
    }
}
for (i=0; i<= MAXLIST-2; i++)
    {printf("The Selection Sorted List L elements are %d\n", L[i]); }

    return 0;
};
