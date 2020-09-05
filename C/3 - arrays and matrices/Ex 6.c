/*
Make an algorithm that reads a matrix of integers of order 10x10, calculate and show the sum of the elements located below the main diagonal of the matrix, including the elements of the main diagonal itself.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main()
{

    int mat[MAX][MAX], i, j, sum=0;

    //interacting the matrix positions and assigning values to them
    for(i = 0 ; i < MAX ; i++) {

        for(j = 0 ; j < MAX ; j++) {
            scanf("%i",&mat[i][j]);
        }
    }

    for(i = 0 ; i < MAX ; i++) {

        for(j=0 ; j<MAX ; j++) {

            if(i + j > MAX-1) { //below the main diagonal
                sum = sum + mat[i][j];
            }

            if(i == j) {    //main diagonal
                sum = sum + mat[i][j];
            }
        }
    }
    
    //interacting the matrix positions and printing the content
    for(i=0 ; i < MAX ; i++) {

        for( j = 0 ; j < MAX ; j++) {
            printf("%i ",mat[i][j]);
        }
        printf("\n");
    }

    printf("The sum is %i",sum);

    return 0;
}
