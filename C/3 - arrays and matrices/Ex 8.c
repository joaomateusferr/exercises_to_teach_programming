#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mat[4][5],i,j,linha[4]={0,0,0,0},coluna[5]={0,0,0,0,0},soma=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%i",&mat[i][j]);
        }
    }

    printf("\n\n");


     for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            soma=soma+mat[i][j];
            linha[i]=linha[i]+mat[i][j];
            coluna[j]=coluna[j]+mat[i][j];
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%i",mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0;i<4;i++)
    {
        printf("%i ",linha[i]);
    }

    printf("\n\n");

    for(j=0;j<5;j++)
    {
        printf("%i ",coluna[j]);
    }


    printf("\n\n\na soma eh: %i",soma);

    return 0;
}
