#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

float perimetro (float r)
{
    float p;

    p=2*PI*r;

    return p;
}

float area (float r)
{
    float a;

    a=PI*(r*r);

    return a;
}

int main()
{

    float r,p,a;

    printf("insira o valor do raio: ");
    scanf("%f",&r);

    p=perimetro(r);
    a=area(r);

    printf("area: %0.2f\n",a);
    printf("perimetro: %0.2f\n",p);


    return 0;
}
