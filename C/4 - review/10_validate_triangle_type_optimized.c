#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("insira os lados dos triangulo\n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);

    if((a<b+c)&&(b<a+c)&&(c<a+b))
    {
        if((a==b)&&(b==c))
        {
            printf("triangulo equilatero\n");
        }
        else
        {
            if((a!=b)&&(b!=c))
            {
                printf("triangulo escaleno\n");
            }
            else
            {
                printf("triangulo isosceles\n");
            }
        }
    }
    else
    {
        printf("não é trinagulo\n");
    }

    return 0;
}
