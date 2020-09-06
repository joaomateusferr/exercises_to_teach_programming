#include <stdio.h>
#include <stdlib.h>

#define MAX 2

struct livro
{
    char nome[30];
    int ano,paginas;
    float valor;
};

int main()
{
    struct livro titulo [MAX];
    int i;
    float soma=0,media;

    for(i=0;i<MAX;i++)
    {
        printf("insira os dados do livro %i\n",i+1);

        printf("insira o titulo\n");
        fflush(stdin);
        gets(titulo[i].nome);
        fflush(stdin);

        printf("insira o ano da edicao\n");
        scanf("%i",&titulo[i].ano);

        printf("insira o numero de paginas\n");
        scanf("%i",&titulo[i].paginas);

        printf("insira o preco do livro\n");
        scanf("%f",&titulo[i].valor);

        printf("\n\n");

        soma=soma+titulo[i].valor;
    }

    media=soma/MAX;

    printf("a media de preco dos livros eh %0.2f\n",media);

    return 0;
}
