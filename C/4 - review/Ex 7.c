#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x1,x2;

    printf("insira os valores de a b e c de uma equacao do 2 grau\n");

    printf("insira o valor de a\n");
    scanf("%f",&a);

    printf("insira o valor de b\n");
    scanf("%f",&b);

    printf("insira o valor de c\n");
    scanf("%f",&c);

    printf("\nsua equacao eh %gx2 + %gx+ %g\n",a,b,c);

    delta=(b*b)-(4*a*c);

    x1=((-b)+sqrt(delta))/(2*a);
    x2=((-b)-sqrt(delta))/(2*a);

    if(delta>0)
    {
        printf("x1 = %0.2f\nx2 = %0.2f\n\n",x1,x2);
    }

    else
    {
        if(delta==0)
        {
            printf("x1 = x2 = %g\n",x1);
        }
        else
        {
             printf("nao ha raiz\n");
        }
    }

    return 0;
}
