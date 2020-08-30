#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void escreverint(int vet[]) //metodo que escreve vetor inteiro na tela
{
    int i;


    for(i=0;i<MAX;i++)
    {
        printf("%i ",vet[i]);
    }

    printf("\n");
}

void escreverfloat(float met[]) //metodo que escreve vetor float na tela
{
    int i;


    for(i=0;i<MAX;i++)
    {
        printf("%0.2f ",met[i]);
    }

    printf("\n");
}

void preencher(int vet[])   //metodo que preenche o vetor intero
{
    int i;

    for(i=0;i<MAX;i++)
    {
        scanf("%i",&vet[i]);
    }
}

int maior(int vet[])    //função que determina o maior valor do vetor
{
    int i,maior;

    maior=vet[0];

    for(i=0;i<MAX;i++)
    {
        if(vet[i]>maior)
        {
            maior=vet[i];
        }
    }

    return maior;
}

int menor(int vet[])    //função que determina o menor valor do vetor
{
    int i,menor;

    menor=vet[0];

    for(i=0;i<MAX;i++)
    {
        if(vet[i]<menor)
        {
            menor=vet[i];
        }
    }

    return menor;
}

int pesquisa(int vet[]) //função que determina se um valor está contido no vetor
{
    int i,n,existe=0;

    printf("insira um numero que deseja saber se existe no vetor\n");
    scanf("%i",&n);

    for(i=0;i<MAX;i++)
    {
        if(vet[i]==n)
        {
            existe=1;
        }
    }

    return existe;
}

void mul(int vet[],int m[]) //metodo que multiplica todos os elementos do vetor por um numero
{
    int i,n;

    printf("insira um numero para multiplicar o vetor\n");
    scanf("%i",&n);

    for(i=0;i<MAX;i++)
    {
        m[i]=vet[i]*n;
    }
}

void metade(int vet[],float met[])  //metodo que divide todos os elementos do vetor por 2
{
    int i;

    for(i=0;i<MAX;i++)
    {
        met[i]=(float)vet[i]/2;     //ou usar 2.0 para modular o vetor de int para float
    }
}

int main()
{
    int vet[MAX],m[MAX],maiorv,menorv,existev;
    float met[MAX];

    printf("insira o vetor\n");
    preencher(vet);
    printf("\n");

    printf("vetor digitado: ");
    escreverint(vet);
    printf("\n");

    maiorv=maior(vet);
    menorv=menor(vet);

    printf("menor elemento do vetor: %i\n",menorv);
    printf("maior elemento do vetor: %i\n",maiorv);
    printf("\n");

    existev=pesquisa(vet);
    if(existev==1)
    {
        printf("existe no vetor\n");
    }
    else
    {
        printf("nao existe no vetor\n");
    }
    printf("\n");

    mul(vet,m);
    printf("vetor multiplicado: ");
    escreverint(m);
    printf("\n");

    metade(vet,met);
    printf("vetor dividido por 2: ");
    escreverfloat(met);
    printf("\n");

    return 0;
}
