/*
Make an algorithm that reads a matrix 4x5, calculate and show the sum of each row and also the sum of all elements of the matrix.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int mat[4][5], i, j, row[4]={0,0,0,0}, column[5]={0,0,0,0,0}, sum=0; //row and column are initialized to 0 because they will be used as cumulative variables

    for(i = 0 ; i < 4 ; i++) {

        for(j = 0 ; j < 5 ; j++) {
            scanf("%i",&mat[i][j]);
        }
    }

    for(i = 0 ; i < 4 ; i++) {

        for(j = 0 ; j < 5 ; j++) {
            sum = sum + mat[i][j];
            row[i] = row[i] + mat[i][j];
            column[j] = column[j] + mat[i][j];
        }
    }

    printf("\n\nMatrix:\n");

    for(i = 0 ; i < 4 ; i++) {

        for(j = 0 ; j < 5 ; j++) {
            printf("%i",mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\nRows Sum:\n");

    for(i = 0 ; i < 4 ; i++) {
        printf("%i ",row[i]);
    }

    printf("\n\nColumn Sum:\n");

    for(j = 0 ; j < 5 ; j++) {
        printf("%i ",column[j]);
    }

    printf("\n\nThe sum of all matrix elements is: %i",sum);

    return 0;
}
