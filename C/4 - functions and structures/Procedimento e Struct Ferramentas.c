#include <stdio.h>
#include <stdlib.h>
#define MAX 2

struct ferramenta
{
    char descricao[30];
    float pot;
    int fase;
};

void preencher (struct ferramenta dados [])
{
    int i;

    for(i=0;i<MAX;i++)
    {
        printf("insira os dados da ferramenta %i\n",i+1);

        printf("insira a descrição ");
        setbuf(stdin, NULL);
        scanf("%[^\n]s", dados[i].descricao);
        setbuf(stdin, NULL);

        printf("insira a potencia ");
        scanf("%f",&dados[i].pot);

        printf("insira o numero de fases");
        scanf("%i",&dados[i].fase);

        printf("\n");
    }
}

void escrever2fases(struct ferramenta dados [])
{
    int i;

    printf("\nferramentas com 2 fases\n");

    for(i=0;i<MAX;i++)
    {
        if(dados[i].fase==2)
        {
            printf("%s\n",dados[i].descricao);
        }
    }
}

int main()
{
    struct ferramenta dados [MAX];

    preencher(dados);
    escrever2fases(dados);

    return 0;
}
