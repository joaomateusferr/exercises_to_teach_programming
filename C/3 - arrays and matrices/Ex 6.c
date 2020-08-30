#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main()
{

    int mat[MAX][MAX],i,j,soma=0;

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            scanf("%i",&mat[i][j]);
        }
    }

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            if(i+j>MAX-1)
            {
                soma=soma+mat[i][j];
            }

            if(i==j)
            {
                soma=soma+mat[i][j];
            }
        }
    }

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            printf("%i ",mat[i][j]);
        }
        printf("\n");
    }

    printf("a soma eh %i",soma);

    return 0;
}
