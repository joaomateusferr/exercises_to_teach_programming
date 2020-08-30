#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,vezes;

    for(i=1;i<11;i++)
    {
        for(j=1;j<11;j++)
        {
            vezes=i*j;
            printf("%i X %i = %i\n",i,j,vezes);
        }
    }


    return 0;
}
