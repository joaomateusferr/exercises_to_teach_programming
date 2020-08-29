#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,c=0,som=0;

    printf("insira as 3 idades\n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);

    som=a+b+c;

    if(som>=100)
    {
        printf("a soma eh maior que 100\n");
    }

    else
    {
        printf("a soma nao eh maior que 100\n");
    }

    return 0;
}
