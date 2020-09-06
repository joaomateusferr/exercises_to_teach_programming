/*
Make an algorithm that reads 10 values and stores in vector A and another 10 values and stores in vector B.
Then multiply vector A by the inverse of vector B and store the result in vector C.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 5


int main() {
    
    int va[MAX], vb[MAX], vc[MAX], i, j;

    for(i = 0; i < MAX; i++) {
        scanf("%i",&va[i]);
    }

    //interacting the vector positions and assigning values to them from back to front to avoid having to reverse it later
    for(i = MAX-1; i > = 0; i--) {
        scanf("%i",&vb[i]);
    }

    for(i = 0; i < MAX; i++) {
        vc[i] = va[i]*vb[i];
    }

    for(i=0; i < MAX; i++) {
        printf("%i ",vc[i]);
    }

    return 0;
}
