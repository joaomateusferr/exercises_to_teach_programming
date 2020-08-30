#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,maior;

    printf("insira 3 numeros\n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);

    maior=a;

    if(b>maior)
    {
        maior=b;
    }


    if(c>maior)
    {
        maior=c;
    }


    printf("%i eh o maior",maior);

    return 0;
}
