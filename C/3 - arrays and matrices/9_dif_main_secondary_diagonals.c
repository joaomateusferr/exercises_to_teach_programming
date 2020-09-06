/*
Make an algorithm that reads a matrix of order 10x10, calculate and show the difference between the sum of the elements of the main diagonal and the sum of the secondary diagonal.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main() {

    int mat[MAX][MAX], i, j, dif=0, md=0, sd=0;

    for(i = 0; i < MAX; i++) {

        for(j = 0; j < MAX; j++) {

            scanf("%i",&mat[i][j]);

            if(i == j) { //main diagonal
                md = md + mat[i][j];
            }

            if(i + j == MAX-1) { //secondary diagonal
                sd = sd + mat[i][j];
            }

        }
    }

    dif = md - sd;

    printf("The difference is %i\n",dif);

    return 0;
}
