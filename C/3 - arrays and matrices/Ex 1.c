#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main()
{

    int a[MAX],i,cont=0;

    for(i=0;i<MAX;i++)
    {
        scanf("%i",&a[i]);
    }

    printf("indices de 30: ");

    for(i=0;i<MAX;i++)
    {
        if(a[i]==30)
        {
            printf("%i ",i+1);
            cont++;
        }

    }

    if(cont==0)
    {
        printf("nao ah");
    }

    return 0;
}
