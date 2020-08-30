#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,soma=0;

    printf("divisores de 3 no intervalo de 1 a 20\n\n");

    for(i=1;i<21;i++)
    {
        if(i%3==0)
        {
            printf("divisor - %i\n",i);
            soma=soma+i;
        }
    }

    printf("\na soma eh %i",soma);

    return 0;
}
