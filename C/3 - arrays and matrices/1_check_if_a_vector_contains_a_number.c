/*
Make an algorithm that reads 100 values and check if there are values equal to 30.
If they exist, write the positions in which they are stored.
*/
#include <stdio.h>
#include <stdlib.h>

//you can define a constant to facilitate testing by changing the number of inputs just by changing this value
#define MAX 5

int main() {

    int a[MAX], i, cont=0;

    printf("Enter %i values to fill the vector\n", MAX);

    //interacting the vector positions and assigning values to them
    for(i = 0; i < MAX; i++) {
        scanf("%i",&a[i]);
    }

    printf("Vector positions containing the value 30: ");

    for(i = 0; i < MAX; i++) {
        
        if(a[i] == 30) {
            printf("%i ",i+1); //the positions of the vector start at 0 in c but, this is not intuitive for people so i + 1 prints the value starting from 1
            cont++;
        }

    }

    if(cont==0) {
        printf("None");
    }

    return 0;
}
