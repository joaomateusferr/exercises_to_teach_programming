/*
Make an algorithm that reads a matrix of reals of order 10x10, divide each element of a line of the matrix by the element of the main diagonal of this line, and show the modified matrix.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int main() {
    
    int i, j, k=0;
    float mat[MAX][MAX], vet[MAX], div;

    for(i = 0; i < MAX; i++) {

        for(j = 0; j < MAX; j++) {
            scanf("%f",&mat[i][j]);
        }
    }

    for(i = 0; i < MAX; i++) {

        for(j = 0; j < MAX; j++) {

            if(i == j) {
                vet[k]=mat[i][j];
                k++;
            }
        }
    }

    for(i = 0; i < MAX; i++) {

        for(j = 0; j < MAX; j++) {
            mat[i][j]=mat[i][j]/vet[i];
        }
    }

    for(i = 0; i < MAX; i++) {

        for(j = 0; j < MAX; j++) {
            printf("%0.2f ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
