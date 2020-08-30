#include <stdio.h>
#include <stdlib.h>

#define MAX 10


int main()
{
    int veta[MAX],vetb[MAX],vetc[MAX],i,j;

    for(i=0;i<MAX;i++)
    {
        scanf("%i",&veta[i]);
    }

    for(i=MAX-1;i>=0;i--)
    {
        scanf("%i",&vetb[i]);
    }

    for(i=0;i<MAX;i++)
    {
        vetc[i]=veta[i]*vetb[i];
    }


    for(i=0;i<MAX;i++)
    {
        printf("%i ",vetc[i]);
    }


    return 0;
}
