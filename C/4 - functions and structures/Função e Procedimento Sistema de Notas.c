#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 999

struct nota
{
    char nome[30];
    float n1,n2,n3,media;
};

int preencher (struct nota aluno[])
{
    int i=0,tm;

    while(strcmp("fim",aluno[i].nome)!=0)
    {
        printf("insira o nome do aluno %i\n",i+1);
        setbuf(stdin, NULL);
        scanf("%[^\n]s", aluno[i].nome);
        setbuf(stdin, NULL);

        if(strcmp("fim",aluno[i].nome)==0)  //sai do laço assim que fim for digitado sem fazer mais nada
        {
            break;
        }

        printf("insira as 3 notas dele\n");
        scanf("%f",&aluno[i].n1);
        scanf("%f",&aluno[i].n2);
        scanf("%f",&aluno[i].n3);

        aluno[i].media=(aluno[i].n1+aluno[i].n2+aluno[i].n3)/3;
        printf("a media dele eh %0.2f\n\n",aluno[i].media);

        i++;
        tm=i;
    }

    return tm;
}

void escrever (struct nota aluno[],int tm)
{
    int i;

    printf("\nmedia = 6 \n\n");

    for(i=0;i<=tm;i++)
    {

        if(strcmp("fim",aluno[i].nome)==0)  //sai do laço para não escrever os dados de fim
        {
            break;
        }

        printf("%s\n",aluno[i].nome);
        printf("mdeia: %0.2f\n",aluno[i].media);

        if(aluno[i].media>=6)
        {
            printf("aprovado\n\n");
        }
        else
        {
            printf("reprovado\n\n");
        }
    }
}

int main()
{
    struct nota aluno[MAX];
    int tm;

    tm=preencher(aluno);

    escrever(aluno,tm);

    return 0;
}
