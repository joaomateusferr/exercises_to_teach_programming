/*
Sum of 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 -> j/i
i is initialized as 1 increases by 1 in each interaction
j is initialized as 1 increases by 2 in each interaction
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i, j = 1;
    float s = 0;

    for(i = 1 ; i < 51 ; i++) {

        printf("%i/%i + ",j,i);

        s = s + ((float)j / (float)i);
        j = j + 2;
    }

    printf("\nSum = %g",s);


    return 0;
}
