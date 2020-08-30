#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct aluno
{
    char nome[50];
    int idade;
    float media;
};

void prrencher(struct aluno dados[])
{
    int i;

    for(i=0;i<MAX;i++)
    {
        printf("insira os dados do aluno %i\n\n",i+1);

        printf("nome ");
		setbuf(stdin, NULL);
        scanf("%[^\n]s",&dados[i].nome);
		setbuf(stdin, NULL);

        printf("idade ");
        scanf("%i",&dados[i].idade);

        printf("media ");
        scanf("%f",&dados[i].media);

        printf("\n");
    }
}

int maior (struct aluno dados[])
{
    int i,maiorp;
    float maiorv=0;

    for(i=0;i<MAX;i++)
    {
        if(dados[i].media>maiorv)
        {
            maiorv=dados[i].media;
            maiorp=i;
        }
    }

    return maiorp;
}

int menor (struct aluno dados[])
{
    int i,menorp;
    float menorv=11;

    for(i=0;i<MAX;i++)
    {
        if(dados[i].media<menorv)
        {
            menorv=dados[i].media;
            menorp=i;
        }
    }

    return menorp;
}

float media (struct aluno dados[])
{
    int i;
    float soma, media;

    for(i=0;i<MAX;i++)
    {
        soma=soma+dados[i].media;
    }
    media=soma/MAX;

    return media;
}

float porc (struct aluno dados[],float media)
{
    int i,cont=0;
    float porc;

    for(i=0;i<MAX;i++)
    {
        if(dados[i].media>=media)
        {
            cont++;
        }
    }
    porc=((100*cont)/MAX);

    return porc;
}

int main()
{
    struct aluno dados[MAX];
    int maiorp,menorp;
    float mediat,porct;

    prrencher(dados);
    maiorp=maior(dados);
    menorp=menor(dados);
    mediat=media(dados);
    porct=porc(dados,mediat);

    printf("idade do aluno com a maior media: %i\n",dados[maiorp].idade);
    printf("idade do aluno com a menor media: %i\n",dados[menorp].idade);
    printf("media da sala %0.2f\n",mediat);
    printf("porcentagem de alunos com media maior que a media da sala %0.2f\n",porct);

    return 0;
}
