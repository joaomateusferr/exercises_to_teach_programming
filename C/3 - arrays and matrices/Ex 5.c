#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int main()
{
    int i,j,total;
    char nomes[MAX][50];
    float alturas[MAX],media,soma,maior,menor;

    for(i=0;i<MAX;i++)
    {
        scanf("%s",&nomes[i]);
        scanf("%f",&alturas[i]);
        soma=soma+alturas[i];
    }


    media=soma/i;
    maior=alturas[0];
    menor=alturas[0];


    for(i=0;i<MAX;i++)
    {
        if(alturas[i]>maior)
        {
            maior=alturas[i];
        }
        if(alturas[i]<menor)
        {
            menor=alturas[i];
        }
    }


    printf("media: %0.2f\nmaior altura %0.2f\nmenor altura %0.2f\nnomes dos acima da media\n",media,maior,menor);

    for(i=0;i<MAX;i++)
    {
       if(alturas[i]>media)
       {
           printf("%s\n",nomes[i]);
       }
    }

    return 0;
}
