#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main()
{

    int a[20],b[20],c[20],d[20],i,soma=0;

    for(i=0;i<MAX;i++)
    {
        scanf("%i",&a[i]);
    }

    for(i=0;i<MAX;i++)
    {
        soma=soma+a[i];
    }

    printf("a soma eh %i",soma);

    return 0;
}
