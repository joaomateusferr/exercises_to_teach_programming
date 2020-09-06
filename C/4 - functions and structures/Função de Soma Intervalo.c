#include <stdio.h>
#include <stdlib.h>

int somaintervalo (int n1,int n2)
{
    int i,soma;

    for(i=n1;i<=n2;i++)
    {
        soma=soma+i;

    }

    return soma;
}

int main()
{
    int n1,n2,soma;

    printf("insira o inicio do intervalo ");
    scanf("%i",&n1);

    printf("insira o final do intervalo ");
    scanf("%i",&n2);

    soma=somaintervalo(n1,n2);
    printf("a soma dos valores do intervalo eh: %i",soma);

    return 0;
}
