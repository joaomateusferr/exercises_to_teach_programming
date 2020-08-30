#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main()
{
    int mat[MAX][MAX],i,j,det=0,dp=0,ds=0;

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            scanf("%i",&mat[i][j]);

            if(i==j)
            {
                dp=dp+mat[i][j];
            }

            if(i+j==MAX-1)
            {
                ds=ds+mat[i][j];
            }

        }
    }


    det=dp-ds;

        printf("%i eh a diferenca\n",det);

    return 0;
}
