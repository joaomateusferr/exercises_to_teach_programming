#include <stdio.h>
#include <stdlib.h>

int fatorial (int n)
{
    int i,fat=1;

    for(i=1;i<=n;i++)
    {
        fat=fat*i;
    }

    return fat;
}

int main()
{
    int n,fat;

    printf("insira o valor para o calculo do fatorial\n");
    scanf("%i",&n);

    fat=fatorial(n);

    printf("%i! = %i\n",n,fat);

    return 0;
}
