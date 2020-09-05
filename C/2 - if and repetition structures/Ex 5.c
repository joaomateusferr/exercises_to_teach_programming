#include <stdio.h>
#include <stdlib.h>

int main() {

    int f;
    float c;

    for(f = 50 ; f < 151 ; f++) {
        c = ((5.0/9)*(f-32));
        printf("%i %0.1f \n",f,c);
    }

    return 0;
}
