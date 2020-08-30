#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 2

struct dados
{
    char nome[30];
    float pesso;
    int idade
};

int preencher (struct dados pessoa[])
{
    int i=0;

    for(i=0;i<MAX;i++)
    {
        printf("insira os dados da pessoa %i\n",i+1);

        printf("insira o nome ");
        setbuf(stdin,NULL);
        scanf("%[^\n]s",pessoa[i].nome);
        setbuf(stdin,NULL);

        printf("insira o pesso ");
        scanf("%f",&pessoa[i].pesso);

        printf("insira a idade ");
        scanf("%i",&pessoa[i].idade);

        printf("\n");
    }
}

void escreveradolecentes (struct dados pessoa[])
{
    int i;

    printf("sao adolecentes:\n");

    for(i=0;i<MAX;i++)
    {
        if(pessoa[i].idade>=12 && pessoa[i].idade<=17)
        {
            printf("%s\n",pessoa[i].nome);
        }
    }
}

int main()
{
    struct dados pessoa[MAX];

    preencher(pessoa);
    escreveradolecentes(pessoa);

    return 0;
}
