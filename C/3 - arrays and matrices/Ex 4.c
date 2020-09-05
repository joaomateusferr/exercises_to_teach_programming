#include <stdio.h>
#include <stdlib.h>

#define MAX 10


int main()
{
    int va[MAX], vb[MAX], vc[MAX], i, j;

    for(i = 0 ; i < MAX ; i++) {
        scanf("%i",&va[i]);
    }

    //interacting the vector positions and assigning values to them from back to front
    for(i = MAX-1 ; i > = 0 ; i--) {
        scanf("%i",&vb[i]);
    }

    for(i=0;i<MAX;i++) {
        vc[i] = va[i]*vb[i];
    }

    for(i=0;i<MAX;i++) {
        printf("%i ",vc[i]);
    }


    return 0;
}
