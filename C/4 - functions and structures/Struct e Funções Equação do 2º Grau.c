#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct valores
{
	int a,b,c,delt;
    float x,x2;
};

int delta (int a,int b,int c)
{
    int del;

    del=(b*b)-4*a*c;

    return del;
}

int nulo (int n)
{
    int resultado;

    if(n==0)
    {
        resultado=1;
    }
    else
    {
        resultado=0;
    }
    return resultado;
}

int negativo (int n)
{
     int resultado;

    if(n<0)
    {
        resultado=1;
    }
    else
    {
        resultado=0;
    }

    return resultado;
}

int main()
{
    struct valores equacao;
    int neg,nul;

    printf("insira as raizes da equacao de segundo grau\n");
    printf("insira a ");
    scanf("%i",&equacao.a);
    printf("insira b ");
    scanf("%i",&equacao.b);
    printf("insira c ");
    scanf("%i",&equacao.c);


    equacao.delt=delta(equacao.a,equacao.b,equacao.c);

    printf("delta %i\n",equacao.delt);


    if(negativo(equacao.delt)==1)
    {
        printf("impossivel calcular as raizes\n");
    }
    else
    {
        if(nulo(equacao.delt)==1)
        {
            equacao.x=((-equacao.b)+sqrt(equacao.delt))/(2*equacao.a);
            printf("as duas raizes sao iguais x = %g\n",equacao.x);
        }
        else
        {
            equacao.x=((-equacao.b)+sqrt(equacao.delt))/(2*equacao.a);
            equacao.x2=((-equacao.b)-sqrt(equacao.delt))/(2*equacao.a);
            printf("x1 = %g\nx2 = %g",equacao.x,equacao.x2);
            printf("\n");
        }
    }


    return 0;
}
