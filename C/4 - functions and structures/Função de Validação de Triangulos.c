#include <stdio.h>
#include <stdlib.h>

int tri (int a,int b,int c)
{
    if (a<b+c && b<a+c && c< a+b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x,y,z,result;

    printf("insira a b e c para checar se formam um triangulo\n");
    scanf("%i",&x);
    scanf("%i",&y);
    scanf("%i",&z);

    result=tri(x,y,z);

    if(result==1)
    {
        printf("eh triangulo\n");
    }
    else
    {
        printf("nao eh triangulo\n");
    }

    return 0;
}
